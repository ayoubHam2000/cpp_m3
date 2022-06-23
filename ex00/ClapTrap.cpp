#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name):
_name(name),
_hit_point(10),
_energy_point(10),
_attack_dmg(0)
{
	std::cout << "ClapTrap " << _name << " just entered" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj):
_name(obj._name),
_hit_point(obj._hit_point),
_energy_point(obj._energy_point), 
_attack_dmg(obj._attack_dmg)
{
	std::cout << "ClapTrap " << _name << " Copied" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "ClapTrap " << this->_name << " replaced With" << " ClapTrap " << obj._name << std::endl;
	if (this != &obj)
	{
		_name = obj._name;
		_hit_point = obj._hit_point;
		_energy_point = obj._energy_point;
		_attack_dmg = obj._attack_dmg;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energy_point > 0U)
	{
		std::cout << "ClapTrap " << _name << " attack "
		<< target << ", causing " << _attack_dmg << " points of damage!" << std::endl;
		_energy_point--;
	}
	else
	{
		std::cout << "No energy point to attack!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " take Damage of " << amount << std::endl;
	if (_hit_point > amount)
		_hit_point -= amount;
	else
		_hit_point = 0U;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_point > 0U)
	{
		std::cout << "ClapTrap " << _name << " repaired with " << amount << std::endl;
		_hit_point += amount;
		_energy_point--;
	}
	else
	{
		std::cout << "No energy point to repaired!" << std::endl;
	}
}

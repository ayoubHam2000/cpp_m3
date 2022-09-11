#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name): 
	_name(name), _health_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " just landed" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &other):
	_name(other._name),
	_health_point(other._health_point),
	_energy_point(other._energy_point),
	_attack_damage(other._attack_damage)
{
	std::cout << "ClapTrap " << _name << " copied from ClapTrap " << other._name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &lhs)
{
	std::cout << "ClapTrap " << _name << " assigned from ClapTrap " << lhs._name << std::endl;
	this->_name = lhs._name;
	this->_health_point = lhs._health_point;
	this->_energy_point = lhs._energy_point;
	this->_attack_damage = lhs._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

/*

When ClapTrack attacks, it causes its target to lose <attack damage> hit points. When ClapTrap repairs itself, 
it gets <amount> hit points back. Attacking and repairing cost 1 energy point each. Of course, ClapTrap can’t do anything 
if it has no hit points or energy points left.

*/

void ClapTrap::attack(const std::string& target)
{
	if (!_energy_point)
		return ;
	std::cout << "ClapTrap: " << _name << " attack ClapTrap: " << target << " and cause him to lose " << _attack_damage << " hit points." << std::endl;
	_energy_point--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap: " << _name << " take Damage: " << " and lose " << _attack_damage << " hit points from " << _health_point << "." << std::endl;
	if (amount >= _health_point)
		_health_point = 0;
	else
		_health_point -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!_energy_point)
		return ;
	std::cout << "ClapTrap: " << _name << " repairs itself and it gets " << amount << " hit point to " << _health_point << "." << std::endl;
	_health_point += amount;
	_energy_point--;
}

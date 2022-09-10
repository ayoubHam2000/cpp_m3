#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name):_name(name)
{
	_health_point = ScavTrap::_health_point;
	_attack_damage = FragTrap::_attack_damage;
	_energy_point = FragTrap::_energy_point;
	ClapTrap::_name = name + "_clap_name";
	std::cout << "DiamondTrap " << FragTrap::_attack_damage << _name << " is here" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): 
	ClapTrap(other), _name(other._name)
{
	std::cout << "DiamondTrap " << _name << " copied from DiamondTrap " << other._name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &lhs)
{
	std::cout << "DiamondTrap " << _name << " assigned from DiamondTrap " << lhs._name << std::endl;
	ClapTrap::operator=(lhs);
	this->_name = lhs._name;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destroyed" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << _name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

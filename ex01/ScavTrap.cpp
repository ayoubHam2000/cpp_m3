#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << _name << " just enter" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	std::cout << "ScavTrap " << _name << " copied from ScavTrap " << other._name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &lhs)
{
	std::cout << "ScavTrap " << _name << " assigned from ScavTrap " << lhs._name << std::endl;
	ClapTrap::operator=(lhs);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!_energy_point)
		return ;
	std::cout << "ScavTrap: " << _name << " attack ScavTrap: " << target << " and cause him to lose " << _attack_damage << " hit points." << std::endl;
	_energy_point--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap in Gate keeper mode." << std::endl;
}

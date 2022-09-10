#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << _name << " just enter" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << "FragTrap " << _name << " copied from FragTrap " << other._name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &lhs)
{
	std::cout << "FragTrap " << _name << " assigned from FragTrap " << lhs._name << std::endl;
	ClapTrap::operator=(lhs);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Positive high fives request." << std::endl;
}

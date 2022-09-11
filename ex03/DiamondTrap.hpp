#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap(const std::string &name = "");
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &lhs);
	~DiamondTrap();
	void	whoAmI();
	void attack(const std::string& target);
};

#endif

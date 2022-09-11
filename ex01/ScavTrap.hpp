#ifndef SCAVTRAP_CPP
#define SCAVTRAP_CPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
public:
	ScavTrap(const std::string &name = "");
	ScavTrap(const ScavTrap& other);
	ScavTrap &operator=(const ScavTrap &lhs);
	~ScavTrap();
	void attack(const std::string& target);
	void	guardGate();


};

#endif

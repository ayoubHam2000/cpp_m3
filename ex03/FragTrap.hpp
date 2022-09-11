#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
public:
	FragTrap(const std::string &name = "");
	FragTrap(const FragTrap& other);
	FragTrap &operator=(const FragTrap &lhs);
	~FragTrap();
	void	highFivesGuys();
};

#endif

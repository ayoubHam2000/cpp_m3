#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class	ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hit_point;
	unsigned int	_energy_point;
	unsigned int	_attack_dmg;
public:
	ClapTrap(const std::string &name);
	~ClapTrap();
	ClapTrap(const ClapTrap &obj);
	ClapTrap	&operator=(const ClapTrap &obj);
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class	ClapTrap
{
public:
	ClapTrap(const std::string &name = "");
	ClapTrap(const std::string &name, unsigned int _health_point, unsigned int _energy_point, unsigned int _attack_damage);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &lhs);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
protected:
	std::string		_name;
	unsigned int	_health_point;
	unsigned int	_energy_point;
	unsigned int	_attack_damage;

};

#endif

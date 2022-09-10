#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("CRobot A");
	ClapTrap	b("CRobot B");
	ClapTrap	c("CRobot C");
	ClapTrap	cloneOfa(a);

	a.attack("Robot B");
	b.beRepaired(20);
	a.takeDamage(10);
	a = ClapTrap(b);

	return (0);
}

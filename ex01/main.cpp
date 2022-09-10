#include "ScavTrap.hpp"

int	main()
{
	//constructor and functions
	ScavTrap	a("SRobot");

	a.attack("Robot A");
	a.beRepaired(10);
	a.takeDamage(10);
	a.guardGate();

	//copy and assignment
	a = ScavTrap(a);

	//destructor
	return (0);
}

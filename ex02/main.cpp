#include "FragTrap.hpp"

int	main()
{
	//constructor and functions
	FragTrap	a("SRobot");

	a.attack("Robot A");
	a.beRepaired(10);
	a.takeDamage(10);
	a.highFivesGuys();

	//copy and assignment
	a = FragTrap(a);

	//destructor
	return (0);
}

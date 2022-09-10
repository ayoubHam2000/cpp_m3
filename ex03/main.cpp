#include "DiamondTrap.hpp"

int	main()
{
	//constructor and functions
	/*
	SRobot
	• Name, which is passed as parameter to a constructor = SRobot
	• ClapTrap::name (parameter of the constructor + "_clap_name" suffix) = SRobot_clap_name
	• Hit points (FragTrap) = 100
	• Energy points (ScavTrap) = 50
	• Attack damage (FragTrap) = 30
	• attack() (Scavtrap) ScavTrap: SRobot_clap_name attack ScavTrap: Robot A and cause him to lose 30 hit points.
	*/
	DiamondTrap	a("SRobot");

	a.attack("Robot A");
	a.beRepaired(10);
	a.takeDamage(10);
	a.highFivesGuys();

	//copy and assignment
	a = DiamondTrap(a);

	//destructor
	return (0);
}

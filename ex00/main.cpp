#include "ClapTrap.hpp"

int	main()
{
	ClapTrap orator = ClapTrap("m7job");
	ClapTrap goldStein = ClapTrap("rabi3a");
	ClapTrap a(goldStein);

	orator.attack("rabi3a");
	goldStein.takeDamage(10);
	orator.beRepaired(10);
	orator = goldStein;
	return 0;
}

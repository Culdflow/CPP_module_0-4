#include "ClapTrap.hpp"

int main()
{
	ClapTrap	a("program");
	ClapTrap	*fing = new ClapTrap("finger");

	a.attack("dimitri");
	fing->attack("the other finger");
	a.takeDamage(5);
	a.beRepaired(10);
	a.attack("dimitri");
	a.attack("dimitri");
	a.attack("dimitri");
	a.attack("dimitri");
	a.attack("dimitri");
	a.attack("dimitri");
	a.beRepaired(10);
	a.attack("dimitri");
	a.attack("jean jean");
	delete fing;
}
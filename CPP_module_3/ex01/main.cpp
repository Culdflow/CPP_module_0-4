#include "ScavTrap.hpp"

int main()
{
	ClapTrap	a("program");
	ClapTrap	b;
	ScavTrap	sc("wahooo");
	ClapTrap	*fing = new ClapTrap("finger");

	a.attack("dimitri");
	fing->attack("the other finger");
	sc.guardGate();
	sc.guardGate();
	sc.attack("your mother");
	b.takeDamage(5);
	b = a;
	b.takeDamage(5);
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
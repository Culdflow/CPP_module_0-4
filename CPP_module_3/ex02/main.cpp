#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap	a("program");
	FragTrap	b;
	ScavTrap	sc("wahooo");

	a.attack("dimitri");
	sc.guardGate();
	sc.guardGate();
	sc.attack("your mother");
	sc.takeDamage(15);
	b.takeDamage(5);
	b.takeDamage(5);
	b.attack("a little orphan child");
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
}
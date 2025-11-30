#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name)
{
	std::cout << "Constructor called" << std::endl;
	weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << "Destructor called" << std::endl;
}

std::string HumanB::getName()
{
	return (name);
}

std::string HumanB::getWeapon()
{
	return (weapon->getType());
}

void	HumanB::setName( std::string new_name )
{
	name = new_name;
}

void HumanB::setWeapon( Weapon &new_weapon)
{
	weapon = &new_weapon;
}

void HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their fists" << std::endl;
}
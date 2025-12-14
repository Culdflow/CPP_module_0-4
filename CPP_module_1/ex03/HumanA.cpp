#include "HumanA.hpp"

HumanA::HumanA( std::string name , Weapon& weapon ) : name(name), weapon(weapon)
{
	std::cout << "Constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor called" << std::endl;
}

std::string &HumanA::getName()
{
	std::string &result = name;
	return (result);
}

std::string HumanA::getWeapon()
{
	return (weapon.getType());
}

void	HumanA::setName( std::string new_name )
{
	name = new_name;
}

void HumanA::setWeapon( Weapon new_weapon)
{
	weapon = new_weapon;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
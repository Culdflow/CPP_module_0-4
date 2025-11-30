#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Default constructor called" << std::endl;
}

Weapon::Weapon( std::string type) : type(type)
{
	std::cout << "Constructor called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Destructor called" << std::endl;
}

const std::string	Weapon::getType()
{
	return (type);
}

void	Weapon::setType( std::string new_type )
{
	type = new_type;
}
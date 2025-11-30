#include "zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie( std::string name ) : name(name)
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Deleted ";
	std::cout << name << std::endl;
}
void	Zombie::set_name( std::string new_name)
{
	name = new_name;
}
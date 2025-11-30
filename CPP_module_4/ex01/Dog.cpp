#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{
	std::cout << "Default Dog Constructor Called" << std::endl;
}

Dog::Dog( Dog& copy ): Animal(copy)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog&	Dog::operator=( const Dog& src )
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->setType(src.getType());
	return *this;
}

void	Dog::makeSound( void )const
{
	std::cout << "woof!" << std::endl;
}
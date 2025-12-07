#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Default Dog Constructor Called" << std::endl;
}

Dog::Dog( Dog& copy ): Animal(copy)
{
	this->_brain = new Brain(*copy.getBrain());
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog&	Dog::operator=( const Dog& src )
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->setType(src.getType());
	*this->_brain = *src.getBrain();
	return *this;
}

void	Dog::makeSound( void )const
{
	std::cout << "woof!" << std::endl;
}

Brain*	Dog::getBrain( void )const
{
	return (this->_brain);
}
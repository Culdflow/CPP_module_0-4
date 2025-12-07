#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Default Cat Constructor Called" << std::endl;
}

Cat::Cat( Cat& copy ): Animal(copy)
{
	this->_brain = new Brain(*copy.getBrain());
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat&	Cat::operator=( const Cat& src )
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->setType(src.getType());
	*this->_brain = *src.getBrain();
	return *this;
}

void	Cat::makeSound( void )const
{
	std::cout << "Miaou!" << std::endl;
}

Brain*	Cat::getBrain( void )const
{
	return (this->_brain);
}
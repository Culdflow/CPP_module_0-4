#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat")
{
	std::cout << "Default Cat Constructor Called" << std::endl;
}

Cat::Cat( Cat& copy ): Animal(copy)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat&	Cat::operator=( const Cat& src )
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->setType(src.getType());
	return *this;
}

void	Cat::makeSound( void )const
{
	std::cout << "Miaou!" << std::endl;
}
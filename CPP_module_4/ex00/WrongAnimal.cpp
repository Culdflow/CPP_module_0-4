#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): _type("undefined and wrong")
{
	std::cout << "Default WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ): _type(type)
{
	std::cout << "WrongAnimal Constructor Called for type: " << type << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal& copy ): _type(copy.getType())
{
	std::cout << "WrongAnimal Copy Constructor Called for type: " << copy.getType() << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destructor Called for type: " << this->getType() << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& src )
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->setType(src.getType());
	return *this;
}

void	WrongAnimal::setType( std::string new_type )
{
	this->_type = new_type;
}

std::string	WrongAnimal::getType( void )const
{
	return (this->_type);
}

void	WrongAnimal::makeSound( void )const
{
	std::cout << "Wrong animal noise" << std::endl;
}
#include "Animal.hpp"

Animal::Animal( void ): _type("undefined")
{
	std::cout << "Default Animal Constructor Called" << std::endl;
}

Animal::Animal( std::string type ): _type(type)
{
	std::cout << "Animal Constructor Called for type: " << type << std::endl;
}

Animal::Animal( Animal& copy ): _type(copy.getType())
{
	std::cout << "Animal copy Constructor Called for type: " << copy.getType() << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal Destructor Called for type: " << this->getType() << std::endl;
}

Animal&	Animal::operator=( const Animal& src )
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->setType(src.getType());
	return *this;
}

void	Animal::setType( std::string new_type )
{
	this->_type = new_type;
}

std::string	Animal::getType( void )const
{
	return (this->_type);
}

void	Animal::makeSound( void )const
{
	std::cout << "Undefined Animal Noise (your mother)" << std::endl;
}
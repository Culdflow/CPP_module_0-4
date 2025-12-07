#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat Constructor Called" << std::endl;
}

WrongCat::WrongCat( WrongCat& copy ): WrongAnimal(copy)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& src )
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	this->setType(src.getType());
	return *this;
}

void	WrongCat::makeSound( void )const
{
	std::cout << "not miaouu!" << std::endl;
}
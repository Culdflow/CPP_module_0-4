#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fPVal = 0;
}

Fixed::Fixed( const Fixed& copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Default Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fPVal = copy.getRawBits();

	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "get raw bits called" << std::endl;
	return (this->_fPVal);
}

void	Fixed::setRawBits( int const new_fPVal )
{
	std::cout << "set raw bits called" << std::endl;
	this->_fPVal = new_fPVal;
}
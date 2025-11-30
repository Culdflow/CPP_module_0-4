#include "Fixed.hpp"

const int Fixed::_nbFraBts = 8;

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

Fixed::Fixed( const int intVal )
{
	std::cout << "int constructor called" << std::endl;
	this->_fPVal = intVal << this->_nbFraBts;
}

Fixed::Fixed( const float floatVal )
{
	std::cout << "float constructor called" << std::endl;
	this->_fPVal = roundf(floatVal * (1 << this->_nbFraBts));
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

float	Fixed::toFloat( void )const
{
	return ((float)this->_fPVal / (float)(1 << this->_nbFraBts));
}

int	Fixed::toInt( void )const
{
	return (this->_fPVal >> this->_nbFraBts);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

bool	Fixed::operator!=(Fixed fixed)const
{
	return (this->toFloat() != fixed.toFloat());
}

bool	Fixed::operator<=(Fixed fixed)const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator<(Fixed fixed)const
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator==(Fixed fixed)const
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator>=(Fixed fixed)const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator>(Fixed fixed)const
{
	return (this->toFloat() > fixed.toFloat());
}

float	Fixed::operator+(Fixed fixed)const
{
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed)const
{
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed)const
{
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed)const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator++()
{
	this->_fPVal++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;

	++this->_fPVal;
	return (tmp);
}

Fixed	Fixed::operator--()
{
	this->_fPVal--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->_fPVal;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &one, Fixed &two)
{
	if (one.toFloat() <= two.toFloat())
		return (one);
	return (two);
}

const Fixed	&Fixed::min(const Fixed &one, const Fixed &two)
{
	if (one.toFloat() <= two.toFloat())
		return (one);
	return (two);
}

Fixed	&Fixed::max(Fixed &one, Fixed &two)
{
	if (one.toFloat() >= two.toFloat())
		return (one);
	return (two);
}

const Fixed	&Fixed::max(const Fixed &one, const Fixed &two)
{
	if (one.toFloat() >= two.toFloat())
		return (one);
	return (two);
}
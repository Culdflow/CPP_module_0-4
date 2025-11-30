#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int 				_fPVal;
		static const int	_nbFraBts;
	public:
		Fixed();
		Fixed( const Fixed& copy );
		Fixed( const int intVal );
		Fixed( const float floatVal );
		~Fixed();
		Fixed &operator=( const Fixed& copy );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits()const;
		void	setRawBits(int const new_fPVal);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);
#pragma once

#include <iostream>

class Fixed
{
	private:
		int 				_fPVal;
		static const int	_nbFraBts;
	public:
		Fixed();
		Fixed( const Fixed& copy );
		~Fixed();
		Fixed &operator=( const Fixed& copy );
		int		getRawBits()const;
		void	setRawBits(int const new_fPVal);
};
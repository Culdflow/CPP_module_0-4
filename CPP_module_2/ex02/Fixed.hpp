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

		//
		Fixed &operator=( const Fixed& copy );
		//
		bool operator>( Fixed fixed)const;
		bool operator<(Fixed fixed)const;
		bool operator>=(Fixed fixed)const;
		bool operator<=(Fixed fixed)const;
		bool operator==(Fixed fixed)const;
		bool operator!=(Fixed fixed)const;

		float operator+(Fixed fixed)const;
		float operator-(Fixed fixed)const;
		float operator*(Fixed fixed)const;
		float operator/(Fixed fixed)const;

		Fixed operator++();
		Fixed operator--();
		Fixed operator++(int);
		Fixed operator--(int);


		static Fixed &min(Fixed &one, Fixed &two);
		static const Fixed &min(Fixed const &one, Fixed const &two);
		static Fixed &max(Fixed &one, Fixed &two);
		static const Fixed &max(Fixed const &one, const Fixed &two);

		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits()const;
		void	setRawBits(int const new_fPVal);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);
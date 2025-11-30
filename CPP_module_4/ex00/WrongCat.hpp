#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
	/// CONSTRUCTOR

		WrongCat( void );
		WrongCat( WrongCat& copy );

		WrongCat&	operator=( const WrongCat& src );

	/// DESTRUCTOR

		~WrongCat( void );

	/// MEMBER FUNCTIONS

		void makeSound( void )const;
};
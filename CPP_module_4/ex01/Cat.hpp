#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
	public:
	/// CONSTRUCTOR

		Cat( void );
		Cat( Cat& copy );

		Cat&	operator=( const Cat& src);
	/// DESTRUCTOR

		~Cat( void );

	/// MEMBER FUNCTIONS

		void makeSound( void )const;
};
#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

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
		Brain*	getBrain( void )const;
	private:
		Brain*	_brain;
};
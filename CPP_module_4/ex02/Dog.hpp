#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
	/// CONSTRUCTOR

		Dog( void );
		Dog( Dog& copy );

		Dog& operator=( const Dog& src );

	/// DESTRUCTOR

		~Dog( void );
	/// MEMBER FUNCTIONS

		void makeSound( void )const;
		Brain*	getBrain( void )const;
	private:
		Brain*	_brain;
};
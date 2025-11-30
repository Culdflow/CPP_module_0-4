#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		/// CONSTRUCTOR

		Animal();
		Animal( std::string type );
		Animal( Animal& copy );

		Animal&	operator=( const Animal& src );

		/// DESTRUCTOR

		virtual ~Animal();

		/// GETTER

		std::string	getType()const;

		/// SETTER

		void		setType( std::string type );

		/// MEMBER FUNCTIONS
		
		virtual void	makeSound( void )const;
};
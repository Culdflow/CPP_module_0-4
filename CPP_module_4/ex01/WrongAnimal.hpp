#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		/// CONSTRUCTOR

		WrongAnimal();
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal& copy );

		WrongAnimal&	operator=( const WrongAnimal& src );

		/// DESTRUCTOR

		virtual ~WrongAnimal();

		/// GETTER

		std::string	getType()const;

		/// SETTER

		void		setType( std::string type );

		/// MEMBER FUNCTIONS
		
		virtual void	makeSound( void )const;
};
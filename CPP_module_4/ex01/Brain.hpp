#pragma once

#include <iostream>

class Brain
{
	public:
	/// CONSTRUCTOR

		Brain();
		Brain( Brain& copy );

		Brain&	operator=( const Brain& src );

	/// DESTRUCTOR

		~Brain();

	/// GETTER

		std::string*	getIdeas()const;

	/// SETTER

		void		setIdeas( std::string* ideas );

	/// MEMBER FUNCTIONS
	private:
		std::string	ideas[100];
};
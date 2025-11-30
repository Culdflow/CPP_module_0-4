#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
	public:
		Zombie();
		Zombie( std::string name);
		~Zombie();
		void	set_name( std::string name);
		void 	announce( void );
	private:
		std::string name;
};

Zombie* zombieHorde( int N, std::string name );
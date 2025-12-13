#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Weapon
{
	public:
							Weapon();
							Weapon( std::string type );
							~Weapon();
		const std::string&	getType();
		void				setType( std::string type );
	private:
		std::string	type;
};
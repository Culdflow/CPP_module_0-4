#pragma once


#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		std::string	getWeapon();
		std::string	&getName();
		void		setName( std::string new_name);
		void		setWeapon( Weapon &new_weapon);
		void		attack();
	private:
		Weapon		*weapon;
		std::string	name;
};
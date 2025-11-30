#pragma once

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA( std::string name , Weapon& Weapon );
		~HumanA();
		std::string	getWeapon();
		std::string	getName();
		void		setName( std::string new_name );
		void		setWeapon( Weapon new_weapon );
		void		attack();
	private:
		std::string	name;
		Weapon&		weapon;
};
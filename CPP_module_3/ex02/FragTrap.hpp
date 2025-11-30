#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap& copy );
		~FragTrap();
		FragTrap	&operator=( const FragTrap& src );
		void		attack( const std::string& target );
		void		highFivesGuys( void );
};
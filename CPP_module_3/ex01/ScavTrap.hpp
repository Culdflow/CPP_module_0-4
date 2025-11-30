#pragma once

#include "ClapTrap.hpp"

class ScavTrap: ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( const ScavTrap& copy );
		ScavTrap( std::string name );
		~ScavTrap();
		ScavTrap	&operator=( const ScavTrap &src );
		void	attack( const std::string& target );
		void	guardGate();
	private:
		bool	_guate_keeper_mode;
};
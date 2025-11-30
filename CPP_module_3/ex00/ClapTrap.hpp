#pragma once

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const ClapTrap& copy);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap	&ClapTrap::operator=(const ClapTrap &src);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	showHealth();
		void	showEnergyPoints();
		void	noEnergy();
	protected:
		std::string				_name;
		unsigned int			_hit_points;
		unsigned int			_energy_points;
		unsigned int			_attack_damage;
};
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Basic ScavTrap")
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_guate_keeper_mode = false;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_guate_keeper_mode = false;
	std::cout << "ScavTrap constructor called and named " << name << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& copy ): ClapTrap(copy)
{
	this->_guate_keeper_mode = copy._guate_keeper_mode;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called for " << this->_name << std::endl;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap& src )
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return *this;
}

void	ScavTrap::attack( const std::string& target)
{
	std::cout << this->_name << " attacks " << target << " blasting him with " << this->_attack_damage << " damage (ScavTrap)" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->_guate_keeper_mode)
	{
		std::cout << this->_name << " deactivated gate keeper mode" << std::endl;
		this->_guate_keeper_mode = false;
	}	
	else
	{
		std::cout << this->_name << " now in gate keeper mode" << std::endl;
		this->_guate_keeper_mode = true;
	}
}


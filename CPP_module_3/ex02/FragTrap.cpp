#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("basic FragTrap")
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Default FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap Constructor called and named " << name << std::endl;
}

FragTrap::FragTrap( const FragTrap& copy ): ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called for " << this->_name << std::endl;
}

FragTrap	&FragTrap::operator=( const FragTrap& src )
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "[HIGH FIVES REQUEST]: POSITIVE from " << this->_name << std::endl; 
}

void	FragTrap::attack( const std::string& target )
{
	std::cout << this->_name << " attacks " << target << " flashing him with " << this->_attack_damage << " points of damage (FragTrap)" << std::endl;
}
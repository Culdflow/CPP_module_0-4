#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("basic ClapTrap"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout <<"Defalt ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "Claptrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(const std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap constructor called named " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default ClapTrap destructor called for " << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy_points > 0)
	{
		std::cout << this->_name << " attacked " << target << " causing " << this->_attack_damage << " damage" << std::endl;
		this->_energy_points--;
	}
	else
		noEnergy();
	this->showEnergyPoints();
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " took " << amount << " amount of damage" << std::endl;
	this->_hit_points -= amount;
	this->showHealth();
	this->showEnergyPoints();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0)
	{
		this->_hit_points += amount;
		std::cout << this->_name << " repaired himself gaining " << amount << " amount of hit points" << std::endl;
		this->_energy_points--;
	}
	else
		this->noEnergy();
	this->showHealth();
	this->showEnergyPoints();
}

void	ClapTrap::showHealth()
{
	std::cout << this->_name << " has " << this->_hit_points << " hit points" << std::endl;
}

void	ClapTrap::showEnergyPoints()
{
	std::cout << this->_name << " has " << this->_energy_points << " energy points" << std::endl;
}

void	ClapTrap::noEnergy()
{
	std::cout << this->_name << " is out of energy" << std::endl;
}
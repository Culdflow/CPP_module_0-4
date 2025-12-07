#include "Brain.hpp"

Brain::Brain( void )
{
	this->_ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = "do we work out to make things work out or is working out based on the work of working out or out is work but in or out work";
	}
	std::cout << "Default Brain Constructor Called" << std::endl;
}

Brain::Brain( Brain& src )
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	this->_ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = src.getIdeas()[i] + " from another brain";
	}
}

Brain::~Brain()
{
	delete [] this->_ideas;
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain	&Brain::operator=( const Brain& src )
{
	std::cout << "Brain Assignation Operation Called" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = src.getIdeas()[i] + " copied";
	}
	return *this;
}

std::string*	Brain::getIdeas()const
{
	return (this->_ideas);
}

void	Brain::setIdeas( std::string* ideas )
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = ideas[i] + "set";
	}
}
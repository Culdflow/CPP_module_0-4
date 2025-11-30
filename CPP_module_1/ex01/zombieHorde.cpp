#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *result = new Zombie[N];

	if (N <= 1)
	{
		std::cout << "horde has to have 1 or more zombies" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
	{
		result[i].set_name(name);
	}
	return (result);
}
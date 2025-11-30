#include "zombie.hpp"

int main()
{
	Zombie *titouan = zombieHorde(10, "Loic");
	for (int i = 0; i < 10; i++)
	{
		titouan[i].announce();
	}
	delete[] titouan;
}
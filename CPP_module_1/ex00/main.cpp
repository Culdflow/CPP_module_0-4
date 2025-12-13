#include "zombie.hpp"

int main()
{
	randomChump("christopher");
	Zombie *titouan = newZombie("titouan");
	titouan->announce();
	delete titouan;
}
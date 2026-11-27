#include "Zombie.hpp"

int main() {
	Zombie *Zombies = ZombieHorde(10, "z");
	for (int i = 0; i < 10; i++)
		Zombies[i].announce();
	delete[] Zombies;
	return 0;
}
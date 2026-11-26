#include "Zombie.hpp"

int maine() {
	Zombie *Zombies = ZombieHorde(10, "z");
	delete Zombies;
}
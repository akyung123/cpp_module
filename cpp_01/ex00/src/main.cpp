#include "Zombie.hpp"

int main(void) {
	Zombie *nZombie = newZombie("Foo");

	nZombie->announce();
	delete nZombie;

	//randomChump("Stack");
	return (0);
}

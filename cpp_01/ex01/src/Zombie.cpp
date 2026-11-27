#include "Zombie.hpp"

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie() {
    std::cout << name << "\n";
}

void Zombie::SetName(const std::string &inputName)
{
    name = inputName;
}
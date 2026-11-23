#include "Zombie.hpp"

// cpp 몇 년만에 하나 헷갈려 뒤지겠다
// Zombie에 대해서 정의하기

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(const std::string &inputname) {
    name = inputname;
}

Zombie::~Zombie() {
    std::cout << name << "\n";
}
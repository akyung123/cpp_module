#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    private:
        std::string name;
    
    public:
        ~Zombie();
        void announce();
        void SetName(const std::string &InputName);
};

Zombie *ZombieHorde(int N, std::string name);

#endif
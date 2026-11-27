#include "Zombie.hpp"

Zombie *ZombieHorde(int N, std::string name) 
{
    Zombie *zombieArray;
    zombieArray = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombieArray[i].SetName(name);
    return (zombieArray);
}
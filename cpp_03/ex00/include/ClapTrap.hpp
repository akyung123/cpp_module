#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include 

class ClapTrap {
    private:
        std::string _name; // 생성자의 인자로 전달해야함
        int _Hit;
        int _Energy;
        int _Attack;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other); // 복사 생성자
        ClapTrap& operator = (const ClapTrap &other); // Copy assignment operator
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amout);
        void beRepaired(unsigned int amout);
};


#endif
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        Weapon *_Weapon;
        std::string _name;
    public:
        HumanB(std::string TypeName);
        void setWeapon(Weapon &TypeWeapon);
        void attack();
};

#endif
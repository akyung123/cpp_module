#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    private:
        Weapon &_Weapon;
        std::string _name;
    public:
        HumanA(std::string TypeName, Weapon &TypeWeapon);
        // void setWeapon(Weapon &Type);
        void attack();
};

#endif
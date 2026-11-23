#include "HumanB.hpp"

HumanB::HumanB(std::string TypeName) :
_Weapon(0), _name(TypeName) {
}

void HumanB::setWeapon(Weapon &TypeWeapon) {
    _Weapon = &TypeWeapon;
}

void HumanB::attack() {
    std::cout << _name << "  attacks with their " << _Weapon->getType() << std::endl;
}
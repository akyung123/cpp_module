#include "HumanA.hpp"

HumanA::HumanA(std::string TypeName, Weapon &TypeWeapon) :
_Weapon(TypeWeapon), _name(TypeName) {  
}

void HumanA::attack() {
    std::cout << _name << "  attacks with their " << _Weapon.getType() << std::endl;
}
#include "Weapon.hpp"

// class Weapon에 대해서 정의하기

Weapon::Weapon(const std::string &typeName) {
    type = typeName;
}

std::string Weapon::getType() {
    return (type);
}

void Weapon::setType(const std::string &typeName) {
    type = typeName;
}

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        // 문자열이 저절로 Weapon으로 바뀌지 않게 막는 표시
        // explicit Weapon(const std::string &typeName);
        // 생성자
        Weapon(const std::string &typeName);

        std::string getType();

        void setType(const std::string &typeName);
};

#endif
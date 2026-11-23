#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

// const란?
// const가 붙으면 그 참조로는 원본을 수정할 수 없습니다. 읽기만 합니다.
// 즉 ""와 같은 임시 문자열도 받을 수 있어진다
// ""은 임시 문자열이라서 수정할 수 없어서 const가 받지 않고는 쓸 수 없다


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
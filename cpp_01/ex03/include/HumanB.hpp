#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

// 생성자에서 무기를 인수로 받지않음
// 항상 무기를 가지고 있지않아도 됨

// HumanB는 위와 같은 이유로 포인터를 사용한다
// 무기가 없는 상태를 표현하기 위해서!

// _name  : 클래스 안의 멤버를 구분하기 위한 언더바

class HumanB {
    private:
        Weapon *_Weapon;
        std::string _name;
    public:
        // 생성자
        HumanB(std::string TypeName);

        void setWeapon(Weapon &TypeWeapon);

        void attack();
};

#endif
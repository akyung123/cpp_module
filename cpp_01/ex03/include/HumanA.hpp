#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

// 생성자에서 무기를 인수로 받음
// 항상 무기를 가지고 있음

// &_Weapon은 이미 있는 무기의 주소를 저장한다
// 여기서 &는 흔히 말하는 별칭을 저장하는 함수라고 생각하면 된다
// 새로운 공간을 부여하는게 아니라 실제 있는 Weapon 변수를 다르게 이렇게 부르자!
// 즉, 여기서는 이미 있는 변수를 이 안에서 이렇게 부른다!
// 이렇게 생각하는 것이 더 좋을 것이다

// *_Weapon은 이때까지 썼던 포인터랑 동일하다
// 그냥 주소를 저장할 수 있는 공간을 제공한다
class HumanA {
    private:
        Weapon &_Weapon;
        std::string _name;
    public:
        // 생성자
        HumanA(std::string TypeName, Weapon &TypeWeapon);
        
        // void setWeapon(Weapon &Type);

        void attack();
};

#endif
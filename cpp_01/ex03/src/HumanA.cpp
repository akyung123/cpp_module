#include "HumanA.hpp"

// 참조는 태어날 때만 초기화할 수 있습니다
// => 태어난 후에는 초기화할 수 없다
// 생각해보면 애칭을 붙이는 건데, 사람이 태어나야할 수 있다!
// 당연한 것
// 그러면 당연히 생성자는 만들면서 동시에 초기화와 생성을 해야한다

HumanA::HumanA(std::string TypeName, Weapon &TypeWeapon) :
_Weapon(TypeWeapon), _name(TypeName) {  
}

// cpp에서 그 본체를 쓸 때는 클래스 이름을 붙여야 함
void HumanA::attack() {
    std::cout << _name << "  attacks with their " << _Weapon.getType() << std::endl;
}
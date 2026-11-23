#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    // main 안에서 중괄호는 그 구간만의 지역 범위를 생성.
    // {} 안에서 만든 객체는 중괄호가 닫히면 소멸자가 호출되며 사라짐
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other typer of club");
        jim.attack();
    }
    return (0);
}
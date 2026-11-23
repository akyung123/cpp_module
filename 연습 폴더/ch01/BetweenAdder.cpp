#include <iostream>

int main(void)
{
    char name[5];

    std::cout << "이름 입력 : ";
    std::cin >> name;

    std::cout << "입력된 이름은 \"" << name << "\"입니다. ";

    return (0);
}
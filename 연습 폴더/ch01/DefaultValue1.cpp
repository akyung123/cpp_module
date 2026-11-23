#include <iostream>
int Adder(int num1=2, int num2=3);

int Adder(int num1, int num2) {
    return num1+num2;
}

int main(void) {
    std::cout << Adder() << std::endl;
    std::cout << Adder(5) << std::endl;
    std::cout << Adder(4, 5) << std::endl;
    return 0;
}
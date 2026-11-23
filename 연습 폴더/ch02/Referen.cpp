#include <iostream>
using namespace std;

int main(void)
{
    int num1 = 2010;
    int &num2 = num1;

    num2 = 3047;
    cout << "val: " << num1 << endl;
    cout << "ref: " << num2 << endl;

    cout << "val: " << &num1 << endl;
    cout << "val: " << &num2 << endl;

    return (0);
}
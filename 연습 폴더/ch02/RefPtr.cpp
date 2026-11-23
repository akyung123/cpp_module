#include <iostream>
using namespace std;

int main(void)
{
    int num1 = 2010;
    int *ptr = &num1;
    int **dptr = &ptr;

    int &ref = num1;
    int *(pref) = ptr;
    int **(&dpref) = dptr;

    cout << ref << endl;
    cout << *pref << endl;
    cout << **dpref << endl;
    
    return (0);
}
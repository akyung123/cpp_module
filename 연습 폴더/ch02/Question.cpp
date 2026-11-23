#include <iostream>
using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
}   Point;

// 두 점의 합을 계산하는 함수
// 동적할당 한 변수를 함수의 참조형 매개변수의 인자로 어떻게 전달해야 하는가?
// 함수 내에 선언된 변수를 참조형으로 반환하려면 해당 변수는 어떻게 선언해야 하는가?

Point& PntAdder(const Point &p1, const Point &p2)
{
    Point *pptr = new Point;
    pptr->xpos = p1.xpos + p2.xpos;
    pptr->ypos = p1.ypos + p2.ypos;

    return *pptr;
}

int main(void)
{
    Point *pptr1 = new Point;
    pptr1->xpos = 3;
    pptr1->ypos = 30;

    Point *pptr2 = new Point;
    pptr2->xpos = 70;
    pptr2->ypos = 7;

    Point &prdf = PntAdder(*pptr1, *pptr2);
    cout << "x: " << prdf.xpos << endl;
    cout << "y: " << prdf.ypos << endl;

    delete pptr1;
    delete pptr2;
    delete prdf;

    return (0);
}
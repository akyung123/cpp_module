#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
/*
    module 02 ~ 09까지는 반드시 정통 클래스 형식을 지켜야한다
    해당 내용은 subject의 "A few design requirements"에 명시되어있다
    1. Default constructor
    2. Copy constructor
    3. Copy assignment operator
    4. Destructor

*/

class Fixed {
    private:
        int _value;
        static const int _bites = 8;
    public:
        Fixed(); // 기본 생성자
        Fixed(const Fixed& other); // 복사 생성자
        // 이미 만들어져 있는 원본 객체를 복제해서 똑같이 하나 더 만들 때, 자동으로 호출되는 함수
        // const 참조자로 받아서 수정 금지, 메모리 효울 증가
        // other을 복사해서 새로운 객체를 생성한다
        // 사용하는 경우   1. 기존 객체로 새 객체를 초기화할때
        //              2. 매개변수로 객체를 값에 전달해야할 경우
        //              3. 함수가 객체를 값으로 반환할 경우
        Fixed &operator = (const Fixed &other); //  Copy assignment operator
        // 이미 만들어져서 존재하는 객체에, 다른 객체의 값을 '덮어쓸(대입할)' 때 호출됨
        // =는 재정의 의미, a=b; 라면 내부에서 a.operator(b);로 해석해서 호출함
        ~Fixed();   // 소멸자
        int     getRawBits(void) const; // this를 const로!
        void    setRawBits(int const raw);
};

#endif

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int _value;
        static const int _bites = 8;
    public:
        Fixed(); // 기본 생성자
        Fixed(const Fixed& other); // 복사 생성자
        Fixed &operator = (const Fixed &other); //  Copy assignment operator
        Fixed(const int x);
        Fixed(const float x);
        ~Fixed();   // 소멸자

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        // operator 정의 추가하기
        // bool : true || false
        bool    operator>(const Fixed &other) const;
        bool    operator<(const Fixed &other) const;
        bool    operator<=(const Fixed &other) const;
        bool    operator>=(const Fixed &other) const;
        bool    operator==(const Fixed &other) const;
        bool    operator!=(const Fixed &other) const;

        // 연산자
        Fixed   operator+(const Fixed &other) const; 
        Fixed   operator=(const Fixed &other) const; 
        Fixed   operator*(const Fixed &other) const; 
        Fixed   operator/(const Fixed &other) const; 

        // 증감자
        Fixed   operator++(int n); // 전위
        Fixed   &operator++(void); // 후위
        Fixed   operator--(int n); // 전위
        Fixed   &operator--(void); // 후위

        // min max
        // const랑 일반 객체 모두 정의해야함
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
};


std::ostream& operator<<(std::ostream &out, const Fixed &fix);

#endif

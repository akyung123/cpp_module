#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default construcotr called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_value = other.getRawBits();
}

Fixed& Fixed::operator = (const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) // 자기 자신과 같지않을 때, 초기화 시켜야함
        this->_value = other.getRawBits();
    return *this;
}

// 비트 연산을 제대로 설명하고 싶다!
Fixed::Fixed(const int x)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = x * (1 << _bites);
}

Fixed::Fixed(const float x)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(x * (1 << _bites));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->_value) / (1 << this->_bites));
}

int Fixed::toInt(void) const
{
    return (this->_value >> _bites);
}

// Fixed 클래스 출력을 위해서 cout를 다시 정의해야함
// 원래 cout는 otream 안에 존재함

// std::cout << fix;
// 실제로는 operator<<(std::cout, fix)가 호출되면서
std::ostream& operator<<(std::ostream &out, const Fixed &fix)
{
    out << fix.toFloat();
    return out;
}

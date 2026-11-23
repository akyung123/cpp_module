#include "Fixed.hpp"

Fixed::Fixed()
{
   //std::cout << "Default construcotr called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const Fixed& other)
{
    //std::cout << "Copy constructor called" << std::endl;
    this->_value = other.getRawBits();
}

Fixed& Fixed::operator = (const Fixed &other)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) // 자기 자신과 같지않을 때, 초기화 시켜야함
        this->_value = other.getRawBits();
    return *this;
}

// 비트 연산을 제대로 설명하고 싶다!
Fixed::Fixed(const int x)
{
    //std::cout << "Int constructor called" << std::endl;
    this->_value = x * (1 << _bites);
}

Fixed::Fixed(const float x)
{
    //std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(x * (1 << _bites));
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
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

// operator 정의 추가하기
// bool : true || false
bool    Fixed::operator>(const Fixed &other) const {
    return (this->_value > other._value);
}
bool    Fixed::operator<(const Fixed &other) const {
    return (this->_value < other._value);
}
bool    Fixed::operator<=(const Fixed &other) const {
    return (this->_value <= other._value);
}
bool    Fixed::operator>=(const Fixed &other) const {
    return (this->_value >= other._value);
}
bool    Fixed::operator==(const Fixed &other) const {
    return (this->_value == other._value);
}
bool    Fixed::operator!=(const Fixed &other) const {
    return (this->_value != other._value);
}

// 연산자
Fixed   Fixed::operator+(const Fixed &other) const {
    return (Fixed(this->toFloat() + other.toFloat()));
}
Fixed   Fixed::operator=(const Fixed &other) const {
    return (Fixed(this->toFloat() - other.toFloat()));
}
Fixed   Fixed::operator*(const Fixed &other) const {
    return (Fixed(this->toFloat() * other.toFloat()));
}
Fixed   Fixed::operator/(const Fixed &other) const {
    return (Fixed(this->toFloat() / other.toFloat()));
}

// 증감자
Fixed   Fixed::operator++(int n) {
    (void) n;
    Fixed tmp = *this;
    this->_value++;
    return (tmp);
}
Fixed   &Fixed::operator++(void) {
    this->_value++;
    return (*this);
}
Fixed   Fixed::operator--(int n) {
    (void) n;
    Fixed tmp = *this;
    this->_value--;
    return (tmp);
}
Fixed   &Fixed::operator--(void) {
    this->_value--;
    return (*this);
}

// min max
// const랑 일반 객체 모두 정의해야함
Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a < b)
        return (a);
    return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a < b) // 앞에서 bool로 비교 연산자 정의함!
        return (b);
    return (a);
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() < b.getRawBits()) // 앞에서 const로 정의안해서 여기서는 비교 연산자 못 씀!
        return (a);
    return (b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() < b.getRawBits())
        return (b);
    return (a);
}


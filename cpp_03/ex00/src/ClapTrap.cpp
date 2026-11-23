#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "Default construcotr called" << std::endl;
    this->name = "Default";
    this->_Hit = 10;
    this->_Energy = 10;
    this->_Attack = 0;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "Constructor called" << std::endl;
    this->_name = name;
    this->_Hit = 10;
    this->_Energy = 10;
    this->_Attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "Copy constructor called" << other._name << endl;
    this->name = other._name;
    this->_Hit = other._Hit;
    this->_Energy = other._Energy;
    this->_Attack = other._Attack;
}

ClapTrap::ClapTrap& operator = (const ClapTrap &other) {
    if (this != &other)
    {
        std::cout << "Copy assignment operator called" << endl;
        this->name = other._name;
        this->_Hit = other._Hit;
        this->_Energy = other._Energy;
        this->_Attack = other._Attack;
    }
    return (*this);
} // Copy assignment operator

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

// ClapTrap <name> attacks <target>, causing <damage> points of damage!
void ClapTrap::attack(const std::string& target) {
    if (_Hit <= 0) {
        std::cout << "ClapTrap " << _name << " has died!" << std::endl;
        retrun ;
    }
    if (_Energy > 0) {
        std::cout << "ClapTrap " << _name << " attacks" << target << ", causing " << _damage << " points of damage!" << std::endl;
        _Energy--;
    }
}

// 데미지를 받다
void ClapTrap::takeDamage(unsigned int amout) {
    if (_Hit <= 0) {
        std::cout << "ClapTrap " << _name << " has died!" << std::endl;
        retrun ;
    }
    std::
}

// 수리를 하다
void ClapTrap::beRepaired(unsigned int amout) {
    if (_Hit <= 0) {
        std::cout << "ClapTrap " << _name << " has died!" << std::endl;
        retrun ;
    }
}
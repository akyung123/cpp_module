#include "Harl.hpp"

// // public
Harl::Harl() {}
Harl::~Harl() {}

// private
void Harl::debug(void) const {    std::cout << DEBUG << std::endl;    }
void Harl::info(void) const {    std::cout << INFO << std::endl;    }
void Harl::warning(void) const {    std::cout << WARNING << std::endl;    }
void Harl::error(void) const {    std::cout << ERROR << std::endl;    }

// public
void Harl::complain(std::string level) const {
    // string 배열과 함수 포인터 배열 만들어서 사용
    const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    // Harl class에 속함 함수 포인터 배열
    void (Harl::* const functions[4])(void) const = 
    {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error
    };
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*functions[i])();
            return ;
        }
    }
    std::cout << "Unknown level" << std::endl;
}
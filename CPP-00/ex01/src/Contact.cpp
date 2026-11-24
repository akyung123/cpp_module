#include "Contact.hpp"

namespace
{
    // 반복은 보조 함수로 뺌
    bool ReadNonEmptyField(const std::string &prompt, std::string &value)
    {
        while (true)
        {
            std::cout << prompt;
            if (!std::getline(std::cin, value))
                return false;
            if (!value.empty())
                return true;
            std::cout << "This field cannot be empty. Please try again.\n";
        }
    }
    std::string truncate(const std::string &str)
    {
        if (str.length() > 10)
            return str.substr(0, 9) + ".";
        return str;
    }
}

Contact::Contact() {
}

// 소멸자 정의
Contact::~Contact() {
}

// cin과 getline은?
// 공백 기준인지, 줄라인 기준인지 읽기 차이
// cin은 공백, 탭, 줄바꿈 기준, getline은 줄바꿈 기준
bool Contact::AddContact() {
    if (!ReadNonEmptyField("First name: ", f_name))
        return false;
    if (!ReadNonEmptyField("Last name: ", l_name))
        return false;
    if (!ReadNonEmptyField("Nickname: ", n_name))
        return false;
    if (!ReadNonEmptyField("Phone number: ", p_number))
        return false;
    if (!ReadNonEmptyField("Darkest secret: ", d_secret))
        return false;
    return true;
}

void Contact::PrintContact() const {
    std::cout << std::right << std::setw(10) << truncate(this->f_name) << "|";
    std::cout << std::right << std::setw(10) << truncate(this->l_name) << "|";
    std::cout << std::right << std::setw(10) << truncate(this->n_name);
}

void Contact::PrintData() const {
    std::cout << "First name: " << f_name << std::endl;
    std::cout << "Last name: " << l_name << std::endl;
    std::cout << "Nickname: " << n_name << std::endl;
    std::cout << "Phone number: " << p_number << std::endl;
    std::cout << "Darkest secret: " << d_secret << std::endl;
}

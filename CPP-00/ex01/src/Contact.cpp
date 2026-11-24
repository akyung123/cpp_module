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
    // 각 변수들이 비지않았다면 입력받도록 해야함
    // 스페이스만 입력했을 경우는? -> 예외처리를 해야하나?
    // 혹은 입력받지 않을 경우 다시 입력하라는 메세지가 떠야함
    // 그렇다면 다시 입력받는 횟수 제한을 해야하나?
    if (!ReadNonEmptyField("First name: ", f_name))
        return false;
    if (!ReadNonEmptyField("Last name: ", l_name))
        return false;
    if (!ReadNonEmptyField("Nickname: ", n_name))
        return false;
    return true;
}

// 열 너비는 각각 10글자, 구분자는 |, 정렬은 오른쪽.
// 저장된 연락처를 인덱스·이름·성·별명의 4열 목록으로 출력함.
// std::setw(10) : 최소 글자를 10글자로 제한함
// std::right : 오른쪽 정렬 설정(기본이 오른쪽이지만, 명시적으로 사용함)
void Contact::PrintContact() {
    std::cout << std::right << std::setw(10) << truncate(this->f_name) << "|";
    std::cout << std::right << std::setw(10) << truncate(this->l_name) << "|";
    std::cout << std::right << std::setw(10) << truncate(this->n_name) << "|";
}

void Contact::PrintData() {
    std::cout << std::left << std::setw(14) << "First Name : " << f_name << std::endl;
    std::cout << std::left << std::setw(14) << "Last Name : " << l_name << std::endl;
    std::cout << std::left << std::setw(14) << "Nickname : " << n_name << std::endl;
    std::cout << std::left << std::setw(14) << "Phone Number : " << p_number << std::endl;
    std::cout << std::left << std::setw(14) << "Darkest Secret : " << d_secret << std::endl;
}


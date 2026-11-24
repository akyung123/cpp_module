#include "PhoneBook.hpp"
#include "Contact.hpp"

// 생성자 정의
PhoneBook::PhoneBook() {
}

// 소멸자 정의
PhoneBook::~PhoneBook() {
}

void PhoneBook::PrintAll() {
    std::cout << std::left << std::setw(10) << "Index" << "|";
    std::cout << std::left << std::setw(10) << "First name" << "|";
    std::cout << std::left << std::setw(10) << "Last name" << "|";
    std::cout << std::left << std::setw(10) << "Nickname" << "|";
    std::cout << std::endl;

    for (int i = 0; i < std::min(count, 8); i++)
    {
        std::cout << std::right << std::setw(1) << i << "|";
        contacts[i].PrintContact();
    }
}

void PhoneBook::AddContact() {
    Contact New;
    
    if (!New.AddContact ())
        return ;
    contacts[nextIndex] = New;
    nextIndex = (nextIndex + 1) % 8;

    if (count < 8)
        ++count;
}

void PhoneBook::SearchContact() {
    if (x >= 0 && x < std::min(count, 8))
        contacts[x].PrintData();
    else
        std::cout << "Invalid index." << std::endl;
}


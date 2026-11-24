#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <sstream>

PhoneBook::PhoneBook() : count(0), nextIndex(0) {
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::PrintAll() const {
    std::cout << std::right << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First name" << "|";
    std::cout << std::setw(10) << "Last name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < count; ++i)
    {
        std::cout << std::right << std::setw(10) << i << "|";
        contacts[i].PrintContact();
        std::cout << std::endl;
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
    PrintAll();
    std::cout << "Enter index: ";
    std::string input;
    if (!std::getline(std::cin, input))
        return ;
    if (input.length() != 1 || input[0] < '0' || input[0] > '7' || input[0] - '0' >= count)
    {
        std::cout << "Invalid index." << std::endl;
        return ;
    }
    int x = input[0] - '0';
    contacts[x].PrintData();
}

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

// 필요 헤더 파일 정의
#include <string>
#include <iostream>
#include "Contact.hpp"

// phonebook class
class PhoneBook{
	private:
		Contact contacts[8];
		int	count;
		int	nextIndex;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void PrintAll() const;
		void AddContact();
		void SearchContact();
};

#endif
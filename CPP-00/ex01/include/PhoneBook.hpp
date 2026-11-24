#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

// 필요 헤더 파일 정의
#include <string>
#include <iostream>
#include <algorithm>
#include "Contact.hpp"

// phonebook class
class PhoneBook{
	private:
		Contact contacts[8];
		// bool _full? int _index?
		int	count;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		// Contact.hpp
	
		void PrintAll();
		void AddContact();
		void SearchContact();
};

#endif
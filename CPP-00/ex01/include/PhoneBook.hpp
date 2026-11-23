#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

// 필요 헤더 파일 정의
#include <string>
#include "Contact.hpp"

// phonebook class
class PhoneBook{
	private:
		Contact contacts[8];
		// bool _full? int _index?
	public:
		PhoneBook(void);
		~PhoneBook(void);
}

#endif
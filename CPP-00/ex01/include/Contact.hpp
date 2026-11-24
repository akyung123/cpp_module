#ifndef CONTACT_h
#define CONTACT_h

// 필요 헤더 파일 정의
#include <string>
#include <iostream>
#include <iomanip> // setw, right 사용

// contact 클래스
/*
	- f_name : first name
	- l_name : last name
	- n_name : nickname
	- p_number : phone number
	- d_secret : darkest secret
*/
class Contact{
	private:
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string p_number;
		std::string d_secret;
	// enum(열거자)를 사용할까?
	/*
	enum Field{
		FirstName, // assigned 0
		LastName, // assigned 1
		NickName, // assigned 2
		PhoneNumber, // assigned 3
		DarkestSecret // assigned 4
	}
	*/
	public:
		Contact();
		~Contact();
		bool AddContact();
		void PrintContact();
		void PrintData();
};
#endif

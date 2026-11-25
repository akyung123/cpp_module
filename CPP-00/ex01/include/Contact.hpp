#ifndef CONTACT_h
#define CONTACT_h

#include <string>
#include <iostream>
#include <iomanip> // use setw, right

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
	public:
		Contact();
		~Contact();
		bool AddContact();
		void PrintContact() const;
		void PrintData() const;
};
#endif

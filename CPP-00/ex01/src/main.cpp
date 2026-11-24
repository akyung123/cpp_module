#include "PhoneBook.hpp"

/*
	공백 포함해서 받기 위해서 getline 사용함
*/

int main()
{
	PhoneBook phoneBook;
	std::string cmd;

	while (std::getline(std::cin, cmd))
	{
		if (cmd == "EXIT")
			break;
		if (cmd == "ADD")
			phoneBook.AddContact();
		else if (cmd == "SEARCH")
			phoneBook.SearchContact();
	}
	return 0;
}
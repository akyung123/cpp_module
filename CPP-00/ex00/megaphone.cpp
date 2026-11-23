// 입력된 문자를 모두 대문자로 변경해서 출력한다
// 최대한 C++답게 만들도록 노력할 것

/*
	인자가 없을 경우 
		: * LOUD AND UNBEARABLE FEEDBACK NOISE * 출력
	인자가 두 개 이상일 경우
		: 인자로 들어온 문자열을 이어서 출력
	인자가 한 개일 경우
		: 모든 알파벳을 대문자로 전환해서 출력
*/
// toupper 함수 이용함

#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

void toupper_line(char *line)
{
	while (*line != '\0')
	{
		*line = std::toupper(static_cast<unsigned char>(*line));
		line++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			toupper_line(argv[i]);
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
}
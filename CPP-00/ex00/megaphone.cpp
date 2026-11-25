#include <iostream>

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
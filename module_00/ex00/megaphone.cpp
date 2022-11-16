#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; argv[i] != NULL; i++)
		{
			std::string str = argv[i];
			for (size_t i = 0; i < str.length(); i++)
				str[i] = std::toupper(str[i]);
			std::cout << str;
		}
		std::cout << "\n";
	}
}

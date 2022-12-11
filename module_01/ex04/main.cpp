//
// Created by Lowell Zima on 12/4/22.
//

#include <iostream>
#include <fstream>

inline bool exists_test (const std::string& name) {
	std::ifstream f(name.c_str());
	return f.good();
}

void replace_str(std::string &buffer, std::string const &s1, std::string const &s2)
{
	size_t i = 0;
	/*
	 * The function starts by declaring a variable called i and initializing it to 0.
	 * This variable will be used to keep track of the current position
	 * in the buffer string as the function searches for occurrences of s1.
	 */
	while (true)
	{
		i = buffer.find(s1, i);
		/*
		 * find is a method of the std::string class that searches for the first
		 * occurrence of a substring within a string and returns the index of the
		 * first character of the found substring. If the substring is not found,
		 * the find method returns a special value called npos, which is a static
		 * member of the std::string class with the value std::string::npos
		 */
		if (i == std::string::npos)
			break;

		buffer.erase(i, s1.length());
		/*
		 * std::string::erase
		 * allows you to remove part of a string. It takes as arguments the index
		 * of the character to start the removal from, and the number of characters
		 * to remove.
		 * The std::string::erase function can be used to remove characters from a
		 * string, or to remove a substring by specifying the starting index and
		 * the length of the substring to remove. It is often used in C++ programs
		 * to manipulate strings.
		 */
		buffer.insert(i, s2);
		/*
		 * std::string::insert inserts a specified number of copies of a given
		 * string or character at a specified position in the string.
		 */
		i += s2.length();
		/*
		 * std::string::length returns the length of a string, that is, the
		 * number of characters in the string. It does not include the null terminator,
		 * which marks the end of the string in C-style strings.
		 */
	}
}

int main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout << "✅ USAGE: Launch ./Sed without arguments (it will be ask in the program)" << std::endl;
		return 1;
	}
	std::string filename;
	std::string s1;
	std::string s2;
	// Assign value though the terminal
	std::cout << "Choose the filename where you want to change all occurrences of one word: ";
	std::getline(std::cin, filename);
	std::cout << "Choose the word to change: ";
	std::getline(std::cin, s1);
	std::cout << "Choose the word to replace with: ";
	std::getline(std::cin, s2);

	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Error: bad arguments, missing input" << std::endl;
		return 1;
	}
	std::string buffer;
	std::string line;

	if (!exists_test(filename))
	{
		std::cout << "Error: filename doesn't exist" << std::endl;
		return 1;
	}

	std::ifstream file(filename);
	std::ofstream replace(filename + ".replace");

	if (file.is_open())
	{
		buffer = "";
		while (true)
		{
			std::getline(file, line);
			buffer += line;
			if (file.eof())
				/*
				 * Check end of file: "file.eof()" function returns a Boolean
				 * value of true if the EOF marker has been reached, and false
				 * if it has not.
				 * */
				break;
			buffer += '\n';
		}
		replace_str(buffer, s1, s2);
		replace << buffer;
		/*
		 * The << operator is known as the insertion or put-to operator,
		 * and it is used to insert data into a buffer. So, "replace << buffer"
		 * would mean to insert new data into the buffer, effectively
		 * replacing the old data with the new.
		 */
		file.close();
		replace.close();
	}
	std::cout << "All occurences of " << s1 << " are changed into " << s2 << " in " << filename << ".replace" << std::endl;
	return 0;
}

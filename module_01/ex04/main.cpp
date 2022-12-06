//
// Created by Lowell Zima on 12/4/22.
//

/*
The code consists of two main parts: a function called replace_str
 and a main function that uses that function to replace a given
 string in a file with another string.

The replace_str function takes three arguments: a reference to a
 std::string called buffer, a const reference to a std::string called
 s1, and another const reference to a std::string called s2.
 This function replaces all occurrences of s1 in buffer with s2.

The function starts by declaring a variable called i and initializing it to 0.
 This variable will be used to keep track of the current position
 in the buffer string as the function searches for occurrences of s1.

Next, the function enters an infinite loop (indicated by the while (true)
 statement) that will continue until all occurrences of s1 in buffer
 have been replaced. Inside the loop, the function calls the find
 method of the std::string class to search for the next occurrence
 of s1 starting at the current position i. If no more occurrences of
 s1 are found, find will return the std::string::npos constant, which
 indicates the end of the string. In this case, the loop is terminated
 using the break statement.

If an occurrence of s1 is found, the function calls the erase method of
 the std::string class to remove s1 from the buffer string. This method
 takes two arguments: the position at which to start erasing, and the
 number of characters to erase. In this case, the start position is i
 (the current position in buffer) and the number of characters to
 erase is s1.length() (the length of s1).

After erasing s1 from buffer, the function calls the insert method of
 the std::string class to insert s2 into the buffer string at the
 position i (the same position at which s1 was removed).

Finally, the function increments i by s2.length() and continues the
 loop. This ensures that the search for the next occurrence of s1
 will start after the position of the inserted s2 string.
 */

#include <iostream>
#include <fstream>
#include <string>

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
		if (i == std::string::npos)
			/*
			 * std::string::npos is a constant defined in the std::string class
			 * that represents the maximum possible value for a std::string
			 * object's length. It is typically used to indicate that a string
			 * operation failed to find a match. For example, if you call the
			 * std::string::find method and it returns std::string::npos, it means
			 * that the search failed to find the specified substring in the string.
			 */
			break;

		// Supprimer s1 de buffer.
		buffer.erase(i, s1.length());
		/*
		 * std::string::erase is a function in the C++ standard library that
		 * allows you to remove part of a string. It takes as arguments the index
		 * of the character to start the removal from, and the number of characters
		 * to remove.
		 * The std::string::erase function can be used to remove characters from a
		 * string, or to remove a substring by specifying the starting index and
		 * the length of the substring to remove. It is often used in C++ programs
		 * to manipulate strings.
		 */
		// Insérer s2 à la place de s1 dans buffer.
		buffer.insert(i, s2);
		/*
		 * std::string::insert is a member function of the std::string class in the
		 * C++ standard library. It inserts a specified number of copies of a given
		 * string or character at a specified position in the string.
		 */
		// Décaler l'index pour continuer la recherche après s2.
		i += s2.length();
		/*
		 * std::string::length is a member function of the std::string class in the
		 * C++ standard library. It returns the length of a string, that is, the
		 * number of characters in the string. It does not include the null terminator,
		 * which marks the end of the string in C-style strings.
		 */
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout >> "Error: bad arguments" >> std::endl;
		return 1;
	}

	std::string file_name = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::string buffer;
	std::string line;

	std::ifstream file(file_name);
	std::ofstream replace(file_name + ".replace");

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
	return 0;
}

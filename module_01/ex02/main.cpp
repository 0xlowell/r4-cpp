//
// Created by Lowell Zima on 11/28/22.
//
#include <iostream>

// str = "HI THIS IS BRAIN" - The value of the string variable
// strPTR = 0x7ffeeba33938 - memory address held by strPTR
// strREF = "HI THIS IS BRAIN" - The value pointed to strREF

// *strPTR = "HI THIS IS BRAIN" - pointed to by strPTR
// &strREF = "0x7ffeeba33938" - memory address held by strREF


int main()
{
	std::string str = "HI THIS IS BRAIN"; //A string variable initialized to "HI THIS IS BRAIN".

	std::string *strPTR = &str;//stringPTR: A pointer to the string.

	std::string &strREF = str;//stringREF: A reference to the string.

	std::cout << "The memory address of the string variable:\t&str = "; 	//0x7ffeeba33938
	std::cout << &str << std::endl;

	std::cout << "The memory address held by strPTR:\t\tstrPTR = ";			//0x7ffeeba33938
	std::cout << strPTR << std::endl;

	std::cout << "The memory address held by strREF:\t\t&strREF = ";			//0x7ffeeba33938
	std::cout << &strREF << std::endl;

	std::cout << "The value of the string variable:\t\tstr = ";			//HI THIS IS BRAIN
	std::cout << str << std::endl;

	std::cout << "The value pointed to by strPTR:\t\t\t*strPTR = ";			//HI THIS IS BRAIN
	std::cout << *strPTR << std::endl;

	std::cout << "The value pointed to strREF:\t\t\tstrREF =";				//HI THIS IS BRAIN
	std::cout << strREF << std::endl;
}

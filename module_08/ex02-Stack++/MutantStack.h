//
// Created by Lowell Zima on 1/23/23.
//

#ifndef R4_CPP_MUTANTSTACK_H
#define R4_CPP_MUTANTSTACK_H

#define	BOLD_BLACK	"\033[1m\033[30m"
#define BOLD_RED	"\033[1m\033[31m"
#define BOLD_G		"\033[1m\033[32m"
#define	RESET   	"\033[0m"
#define BOLD_Y		"\033[1m\033[33m"
#define BOLD_W		"\033[1m\033[37m"


#include <stack>
#include <algorithm>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() { std::cout << "++MutantStack" << std::endl; };
	~MutantStack() { std::cout << "--MutantStack" << std::endl; };
	MutantStack(const MutantStack &m) {
		*this = m;
		std::cout << "Copy ++MutantStack." << std::endl;
	};
	MutantStack &operator = (const MutantStack &m) {
		*this = m;
		std::cout << " = operator overload called." << std::endl;
		return *this;
	};

	typedef typename std::stack<T>::container_type::iterator        iterator;
	iterator        begin(void) { return (std::stack<T>::c.begin()); };
	iterator        end(void) { return (std::stack<T>::c.end()); };

};
/*
 * typedef =
 */

#endif //R4_CPP_MUTANTSTACK_H

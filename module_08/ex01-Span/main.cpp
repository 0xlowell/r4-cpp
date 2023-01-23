//
// Created by Lo on 18/01/2023.
//

#include "Span.h"




int main() {
	Span s(10);
	try {
		s.addNumber(1);
		s.addNumber(5);
		s.addNumber(3);
		s.addNumber(7);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		exit (0);
	}
	try {
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

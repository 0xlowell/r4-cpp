//
// Created by Lo on 18/01/2023.
//

#include "Span.h"

std::vector<int> createVector() {
	int size = 10;
	std::random_device rd;
	std::vector<int> test;// capacity = malloc | size = number of element
	for (int i = 0; i < size; i++) {
		unsigned int r = std::rand() % 1000;
		test.push_back(r);
		std::cout << test[i] << std::endl;
	}
	return test;
}

int main() {

	std::srand(std::time(NULL)); // Change Start for std::rand() design by program (srand = Seed Random)

	Span s(10);

	try {
		std::vector<int> numbers = createVector();
		s.addVector(numbers);
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

//
// Created by Lowell Zima on 1/20/23.
//

#ifndef R4_CPP_SPAN_H
#define R4_CPP_SPAN_H
#include <exception>
#include <vector>
#include <iostream>
#include <random>

class Span {
public:
	Span(unsigned int N); // Store N integers
	~Span();

	Span(const Span &s);
	Span &operator=(const Span &s);

	void addNumber(int number); // Fill the integer tab with this function (quantity: no more than N)
	void addVector(const std::vector<int> &v);
	int shortestSpan(); // distance between all the numbers store
	int longestSpan();

	class SpanError : public std::exception {
	public:
		const char* what() const throw() {
			return ("There are no numbers stored, or only one, no shortest or longest span can be found.");
		}
	};
	class SizeError : public std::exception {
	public:
		const char* what() const throw() {
			return ("Too much numbers added to the vector.");
		}
	};

private:
	unsigned int	_n;
	std::vector<int> _vect;
};



#endif //R4_CPP_SPAN_H

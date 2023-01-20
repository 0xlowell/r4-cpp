//
// Created by Lowell Zima on 1/20/23.
//

#ifndef R4_CPP_SPAN_H
#define R4_CPP_SPAN_H
#include <exception>

class Span {
public:
	Span(unsigned int N); // Store N integers
	~Span();

	Span(const Span &c);
	Span &operator=(const Span &c);

	void addNumber(); // Fill the integer tab with this function (quantity: no more than N)
	void shortestSpan(); // distance between all the numbers store
	void longestSpan();

	class SpanError : public std::exception {
	public:
		const char* what() const throw() {
			return ("There are no numbers stored, or only one, no span can be found.");
		}
	};

private:

};


#endif //R4_CPP_SPAN_H

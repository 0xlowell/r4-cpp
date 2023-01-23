//
// Created by Lowell Zima on 1/20/23.
//

#include "Span.h"


Span::Span(unsigned int n): _n(n) {
	std::cout << "++Span" << std::endl;
}

Span::~Span() {
	std::cout << "--Span" << std::endl;
}

Span::Span(const Span &s) {
	*this = s;
}

Span &Span::operator = (const Span &s) {
	this->_n = s._n;
	this->_vect = s._vect; // deep copy any time you copy a vector
	return (*this);
}

void Span::addNumber(int number) {
	if (this->_vect.size() == _n)
		throw SizeError();
	this->_vect.push_back(number);
}

void f(const std::vector<int> &c) {
	std::random_device rd;
	int i = rd();
	std::for_each(c.begin(), c.end(), addNumber(i) );
}

int Span::shortestSpan() {
	if (_vect.size() < 2)
		throw SpanError();
	std::cout << "Shortest Span Test" << std::endl;
//	std::cout << "Vect size = " << _vect.size() << std::endl;

	// Sort numbers in vector to get the first 2 numbers
	std::sort(_vect.begin(), _vect.end());
	int shortest = _vect[1] - _vect[0];

	// Print result
//	std::cout << "Vect[1] = " << _vect[1] << " | _vect[0] = " << _vect[0] << " = ";
//	std::cout << shortest << std::endl;

	// Looks for smaller distance in vector's numbers
	for (unsigned int i = 1; i < _vect.size() - 1; i++) {
		int diff = _vect[i + 1] - _vect[i];
//		std::cout << "Vect[" << i << " + 1] = " << _vect[i + 1] << " | Vect[" << i << "] = " << _vect[i] << std::endl;
		if (diff < shortest)
			shortest = diff;
	}

	// print result
	std::cout << "ret = ";
	return (shortest);
}

int Span::longestSpan() {
	if (_vect.size() < 2)
		throw SpanError();
	std::cout << "Longest Span Test" << std::endl;
	int max = *std::max_element(_vect.begin(), _vect.end());
	int min = *std::min_element(_vect.begin(), _vect.end());
//	std::cout << "max = " << max << " | ";
//	std::cout << "min = " << min << " | max - min = " << max-min << std::endl;
	std::cout << "ret = ";
	return (max - min);
}



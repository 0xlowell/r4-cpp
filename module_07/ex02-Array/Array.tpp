//
// Created by Lo on 18/01/2023.
//

#ifndef R4_CPP_ARRAY_H
#define R4_CPP_ARRAY_H

#include <iostream>
#include <new>

template <typename T>
class Array {
public :

	Array() { std::cout << "++Array Default" << std::endl; }

	~Array() {
		std::cout << "--Array" << std::endl;
		delete[] this->_arr; };

	Array(unsigned int n) :  _size(n), _arr(new T[n]) {
		std::cout << "++Array with _arr[]" << std::endl;
	};

	Array(const Array &a) {
		*this = a;
	};

	Array &operator =( const Array &a ) {
		std::cout << "Operator assign" << std::endl;

		this->_size = a.size;
		delete this->_arr;
		this->_arr = new T[this->_size];
		for (int i = 0; i < this->_size; i++) {
			this->_arr[i] = a._arr[i]; }
		return (*this);
	};

	T &operator [](std::size_t idx) {
		if (idx >= this->_size)
			throw std::overflow_error("Index outbound");
		return (this->_arr[idx]);
	}

	unsigned int size() const {
		return (this->_size);
	}



private:
	unsigned int 	_size;
	int				*_arr;
};


#endif //R4_CPP_ARRAY_H

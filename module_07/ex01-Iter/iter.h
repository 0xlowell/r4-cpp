//
// Created by Lo on 18/01/2023.
//

#ifndef R4_CPP_ITER_H
#define R4_CPP_ITER_H

#include <iostream>

template <typename T>
void print_it(T &var) {
	std::cout << "var = " << var << std::endl;
}

template <typename T>
void	iter(T *array, int len, void (*f)(const T &)) {
	for (int i = 0; i < len; i++)
		f(array[i]);
}

#endif //R4_CPP_ITER_H

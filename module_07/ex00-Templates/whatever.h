//
// Created by Lo on 18/01/2023.
//

#ifndef R4_CPP_WHATEVER_H
#define R4_CPP_WHATEVER_H

template <typename T>
void swap (T &a, T &b) {
	T c;

	c = a;
	a = b;
	b = c;
}

template <typename T>
T &min(T &a, T &b) {
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T &max(T &a, T &b) {
	if (a > b)
		return (a);
	return (b);
}

#endif //R4_CPP_WHATEVER_H

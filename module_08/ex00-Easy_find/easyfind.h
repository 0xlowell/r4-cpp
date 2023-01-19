//
// Created by Lo on 18/01/2023.
//

#ifndef R4_CPP_EASYFIND_H
#define R4_CPP_EASYFIND_H

#include <iostream>
#include <iostream>

template <typename T>
typename T::iterator	easy_find(T &container, int i) {
	return  std::find(container.begin(), container.end(), i);
}

#endif //R4_CPP_EASYFIND_H

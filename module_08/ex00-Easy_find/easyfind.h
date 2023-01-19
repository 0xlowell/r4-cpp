//
// Created by Lo on 18/01/2023.
//

#ifndef R4_CPP_EASYFIND_H
#define R4_CPP_EASYFIND_H

#include <iostream>

template <typename T>
typename T::const_iterator	easy_find(const T &container, int i) {
	typename T::const_iterator ret;

	ret = std::find(container.begin(), container.end(), i);
	if (*ret != i && ret == container.end())
		std::cerr << "No occurence found of " << i << std::endl;
	return (ret);
}

#endif //R4_CPP_EASYFIND_H

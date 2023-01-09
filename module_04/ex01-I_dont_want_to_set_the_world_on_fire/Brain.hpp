//
// Created by Lowell Zima on 1/4/23.
//

#ifndef R4_CPP_BRAIN_H
#define R4_CPP_BRAIN_H

#include "Animal.hpp"

class Brain {

public:
	Brain();
	~Brain();
	Brain ( const Brain &cpy);
	Brain &operator = ( const Brain &cpy);
	std::string getBrain();

private:
	std::string _ideas[100];
};


#endif //R4_CPP_BRAIN_H

//
// Created by Lowell Zima on 1/4/23.
//

#ifndef R4_CPP_CAT_H
#define R4_CPP_CAT_H

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	~Cat();
	Cat ( const Cat &cpy);
	Cat &operator = ( const Cat &cpy);

	void makeSound() const;
};


#endif //R4_CPP_CAT_H

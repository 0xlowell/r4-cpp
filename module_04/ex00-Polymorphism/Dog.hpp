//
// Created by Lowell Zima on 1/4/23.
//

#ifndef R4_CPP_DOG_H
#define R4_CPP_DOG_H

#include "Animal.hpp"
class Dog : public Animal {
public:
	Dog();
	~Dog();
	Dog ( const Dog &cpy);
	Dog &operator = ( const Dog &cpy);

	void makeSound() const;
};


#endif //R4_CPP_DOG_H

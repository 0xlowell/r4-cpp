//
// Created by Lowell Zima on 1/4/23.
//

#ifndef R4_CPP_DOG_H
#define R4_CPP_DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog();
	~Dog();
	Dog ( const Dog &cpy);
	Dog &operator = ( const Dog &cpy);

	void makeSound() const;
	Brain *getBrainDog();

private:
	Brain *_brain;
};


#endif //R4_CPP_DOG_H

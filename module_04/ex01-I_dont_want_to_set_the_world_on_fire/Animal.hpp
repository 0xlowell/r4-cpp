//
// Created by Lowell Zima on 1/4/23.
//

#ifndef R4_CPP_ANIMAL_H
#define R4_CPP_ANIMAL_H

#include <iostream>

class Animal {
public:
	Animal();
	virtual ~Animal();
	/*
	 * The ~Animal() destructor is declared as virtual because
	 * it will be called when an object of a derived class
	 * is deleted through a pointer to the base class. If the
	 * destructor is not declared as virtual, the derived class's
	 * destructor will not be called, which can lead to memory
	 * leaks or other problems.
	 */
	Animal ( const Animal &cpy );
	Animal &operator = (const Animal &cpy);

	virtual void makeSound() const;

	void setType(std::string type);
	std::string getType() const;

protected:
	std::string type;

};


#endif //R4_CPP_ANIMAL_H

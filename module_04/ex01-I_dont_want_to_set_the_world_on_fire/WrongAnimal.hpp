//
// Created by Lowell Zima on 1/4/23.
//

#ifndef R4_CPP_WRONGANIMAL_H
#define R4_CPP_WRONGANIMAL_H

#include "Animal.hpp"

class WrongAnimal {
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal ( const WrongAnimal &cpy );
	WrongAnimal &operator = (const WrongAnimal &cpy);

	void makeSound() const;

	void setType(std::string type);
	std::string getType() const;

protected:
	std::string type;
};


#endif //R4_CPP_WRONGANIMAL_H

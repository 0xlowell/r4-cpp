//
// Created by Lowell Zima on 1/4/23.
//

#ifndef R4_CPP_WRONGCAT_H
#define R4_CPP_WRONGCAT_H

#include "Animal.hpp"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	~WrongCat();
	WrongCat ( const WrongCat &cpy);
	WrongCat &operator = ( const WrongCat &cpy);
};


#endif //R4_CPP_WRONGCAT_H

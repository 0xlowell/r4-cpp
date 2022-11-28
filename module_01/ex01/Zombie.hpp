//
// Created by Lowell Zima on 11/22/22.
//

#ifndef R4_CPP_ZOMBIE_H
#define R4_CPP_ZOMBIE_H

#include <iostream>
#include <new>
#include <string>
#include <cstdlib>


class Zombie {
private:
	std::string _name;

public:

	Zombie(); // constructor
	~Zombie( void ); // destructor

	Zombie( std::string name ); // class

	void setName( std::string name );
	void announce( void ); // calling
 // access private _name
};

Zombie* zombieHorde( int nbr, std::string name );

#endif //R4_CPP_ZOMBIE_H

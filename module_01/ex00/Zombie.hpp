//
// Created by Lowell Zima on 11/22/22.
//

#ifndef R4_CPP_ZOMBIE_H
#define R4_CPP_ZOMBIE_H

#include <iostream>
#include <new>

class Zombie {
private:
	std::string _name;

public:

	void announce(void);

	Zombie(std::string name);
	~Zombie(void);
};

Zombie* newZombie( std::string name );

void randomChump( std::string name );

#endif //R4_CPP_ZOMBIE_H

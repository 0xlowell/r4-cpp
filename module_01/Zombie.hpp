//
// Created by Lowell Zima on 11/22/22.
//

#ifndef R4_CPP_ZOMBIE_H
#define R4_CPP_ZOMBIE_H

#include <iostream>

class Zombie {
private:
	std::string _name;

public:
	void announce(void);
	Zombie* newZombie(std::string _name);

	Zombie(void);
	~Zombie(void);
};


#endif //R4_CPP_ZOMBIE_H

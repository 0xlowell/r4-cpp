//
// Created by Lowell Zima on 11/28/22.
//

#ifndef R4_CPP_HUMANA_H
#define R4_CPP_HUMANA_H

#include "Weapon.hpp"



class HumanA {
private:
	std::string _name;
	Weapon 		&_weapon;

public:
	HumanA(std::string n, Weapon& wp);
	~HumanA();

	void attack(void);
};

#endif //R4_CPP_HUMANA_H

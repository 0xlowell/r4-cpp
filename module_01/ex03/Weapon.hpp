//
// Created by Lowell Zima on 11/28/22.
//

#ifndef R4_CPP_WEAPON_H
#define R4_CPP_WEAPON_H
#include <iostream>

class Weapon {
private:
	std::string _type;

public:
	Weapon(std::string type);
	~Weapon();

	const std::string& getType() ;
	void setType(std::string type);
};

#endif //R4_CPP_WEAPON_H

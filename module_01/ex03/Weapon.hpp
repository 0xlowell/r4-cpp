//
// Created by Lowell Zima on 11/28/22.
//

#ifndef R4_CPP_WEAPON_H
#define R4_CPP_WEAPON_H
#include <iostream>

class Weapon {
private:

	std::string _name;

public:
	Weapon(std::string name); 	//Weapon club = Weapon("crude spiked club");
	Weapon();
	~Weapon();

	// club.setType("some other type of club");
	void	setType(std::string);
	//
	const std::string& getType(void);
};

#endif //R4_CPP_WEAPON_H

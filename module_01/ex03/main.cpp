//
// Created by Lowell Zima on 11/28/22.
//

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club"); //Object club from class Weapon
		HumanA bob("Bob", club); //Object bob
		bob.attack(); //attack() part of HumanA class
		club.setType("some other type of club"); // setType part of Weapon class
		bob.attack(); //attack part of HumanA class
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club); //setWeapon() part of HumanB class
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}

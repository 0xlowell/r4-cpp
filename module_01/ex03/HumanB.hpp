//
// Created by Lowell Zima on 11/28/22.
//

#ifndef R4_CPP_HUMANB_H
#define R4_CPP_HUMANB_H


class HumanB {
private:
	std::string _name;
	Weapon		*_weapon;
public:
	HumanB( std::string );
	~HumanB( void );

	void	attack( void );
	void	setWeapon( Weapon& );
};


#endif //R4_CPP_HUMANB_H

//
// Created by Lowell Zima on 12/18/22.
//

#ifndef R4_CPP_CLAPTRAP_H
#define R4_CPP_CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap {

protected:
	std::string _name;
	int	_hit, /* 10 */ _energy, /* 10 */ _attack_damage /* 0 */, lol;

public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap ( const ClapTrap &cpy );
	ClapTrap &operator = ( const ClapTrap &cpy );

	void attack( const std::string& target);	// + 1 _energy: target lose _attack_damage
	void takeDamage( unsigned int amount);		// lose <amount> _hit
	void beRepaired( unsigned int amount);		// + 1 _energy: get <amount> _hit points back

	std::string &getName();
	void setName(std::string s);

};

#endif //R4_CPP_CLAPTRAP_H

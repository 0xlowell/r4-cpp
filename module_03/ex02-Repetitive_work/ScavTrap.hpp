//
// Created by Lowell Zima on 12/19/22.
//

#ifndef R4_CPP_SCAVTRAP_H
#define R4_CPP_SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap( std::string name ); // Constructor
	~ScavTrap() { std::cout << _name << " Destructor." << std::endl; }; // Destructor

	// Cpy constructor, with initialization based on ClapTrap()
	ScavTrap(const ScavTrap &cpy): ClapTrap(cpy) { *this = cpy; };

	// Copy assignment operator
	ScavTrap &operator = ( const ScavTrap &cpy );

	void attack( const std::string &target );
	void guardGate();

};

#endif //R4_CPP_SCAVTRAP_H

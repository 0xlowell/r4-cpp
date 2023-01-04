//
// Created by Lo on 20/12/2022.
//

#ifndef R4_CPP_FRAGTRAP_H
#define R4_CPP_FRAGTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string name); // Constructor
	~FragTrap(); // Destructor

	// Cpy constructor, with initialization based on ClapTrap()
	FragTrap(const FragTrap &cpy): ClapTrap(cpy) { *this = cpy; };

	// Copy assignment operator
	FragTrap &operator = ( const FragTrap &cpy);

	void highFivesGuys(void);

};


#endif //R4_CPP_FRAGTRAP_H

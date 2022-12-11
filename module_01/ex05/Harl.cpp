//
// Created by Lowell Zima on 12/10/22.
//

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Constructor called" << std::endl;

	_call[0].fn = &Harl::debug;
	_call[1].fn = &Harl::info;
	_call[2].fn = &Harl::warning;
	_call[3].fn = &Harl::error;

	_call[0].logname = "DEBUG";
	_call[1].logname = "INFO";
	_call[2].logname = "WARNING";
	_call[3].logname = "ERROR";
}

Harl::~Harl() {
	std::cout << "Destructor Harl called" << std::endl;
}

void Harl::debug( void ) {
	std::cout << "WESH: Debug ALORS" << std::endl;
}

void Harl::info( void ) {
	std::cout << "WESH: Info ALORS" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "WESH: Warning ALORS" << std::endl;
}

void Harl::error( void ) {
	std::cout << "WESH: Error ALORS" << std::endl;
}

void Harl::complain( std::string level )
{
	for (int i = 0; i < 4; i++)
	{
		if (_call[i].logname.compare(level) == 0 ) {
			(this->*(_call[i].fn))();
			return ;
		}

	}
	std::cout << "OTHER: WESHing stuff around... ALORS !" << std::endl;
}



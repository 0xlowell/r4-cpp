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
	std::cout << "[DEBUG]: WESH le Debug" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[INFO]: WESH l'Info" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[WARNING]: WESH le Warning" << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ERROR] WESH l'Error" << std::endl;
}

void Harl::complain( std::string level )
{
	int logindex = -1;

	for (int i = 0; i < 4; i++) {
		if (_call[i].logname == level) {
			logindex = i;
			break;
		}
	}
	switch (logindex) {
		case 0:
			(this->*(_call[0].fn))();
		case 1:
			(this->*(_call[1].fn))();
		case 2:
			(this->*(_call[2].fn))();
		case 3:
			(this->*(_call[3].fn))();
			break;
		default:
			std::cout << "Probably WESHing stuff around... !" << std::endl;
	}
}

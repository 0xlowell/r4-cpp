//
// Created by Lowell Zima on 12/10/22.
//

#ifndef R4_CPP_HARL_H
#define R4_CPP_HARL_H

#include <iostream>
#include <string>

class Harl;

typedef struct s_log
{
	std::string logname;
	void (Harl::*fn)( void ); //fn pointer sur fonction de la classe Harl qui prend un Harl et retourne un Harl
} t_log;

class Harl {
public:

	Harl();
	~Harl();

	void complain( std::string level );

private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	t_log _call[4];

};



#endif //R4_CPP_HARL_H

//
// Created by Lowell Zima on 12/10/22.
//

#ifndef R4_CPP_HARL_H
#define R4_CPP_HARL_H


class Harl {
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	void complain( std::string level );
};


#endif //R4_CPP_HARL_H

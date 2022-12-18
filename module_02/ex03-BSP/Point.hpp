//
// Created by Lowell Zima on 12/18/22.
//

#ifndef R4_CPP_POINT_H
#define R4_CPP_POINT_H

#include "Fixed.hpp"

class Point {

private:
	const Fixed	_x, _y; // Fixed attribute x, y

public:
	Point(): _x(0), _y(0) {}; // Constructor Default with initialization list of xc, yc, x, y (all to 0)
	~Point() {}; // Destructor default
	Point(float const xf, float const yf): _x( xf ), _y( yf ) {}; // Constructor with 2 constant float parameters
	Point(const Point &cpy): _x(cpy._x), _y(cpy._y) {};

	Point operator = (const Point &cpy);
	Fixed const getX() const;
	Fixed const getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif //R4_CPP_POINT_H

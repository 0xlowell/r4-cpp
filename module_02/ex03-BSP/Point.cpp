//
// Created by Lowell Zima on 12/18/22.
//

#include "Point.hpp"

Point Point::operator = (const Point &cpy) {
	Point ret = cpy;
	return (ret);
}

const Fixed Point::getX() const {
	return (this->_x);
}

const Fixed Point::getY() const {
	return (this->_y);
}


//// Constructor default with initialize list of Fixed x, y;
//Point::Point(): _xc(0), _yc(0), _x(0), _y(0) {
//}
//
//// Destructor
//Point::~Point() {
//}
//
//// Constructor that takes as parameters two constant floating-point numbers.It initializes x and y with those parameters.
//Point::Point( float const xf, float const yf ): _xc( xf ), _yc( yf ), _x( xf ), _y( yf ) {
//}
//
//
//Point::Point( Fixed const xx, Fixed const yy ): _xc( xx ), _yc( yy ), _x( xx ), _y( yy ) {
//}
//
//// Copy constructor
//Point::Point( const Point &cpy ): _xc( cpy._xc ), _yc( cpy._yc ), _x( cpy._x ), _y( cpy._y ) {
//}

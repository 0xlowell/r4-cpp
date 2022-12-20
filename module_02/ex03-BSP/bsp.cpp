//
// Created by Lowell Zima on 12/18/22.
//

#include "Fixed.hpp"
#include "Point.hpp"

float area( int x1, int y1, int x2, int y2, int x3, int y3 ) {
	float ret;
	ret = ((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
	if (ret < 0)
		ret *= -1;
	return ( ret );
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float xa, ya, xb, yb, xc, yc, xpoint, ypoint;
	float ABC, PBC, PAC, PAB;

	xa = a.getX().toFloat();
	ya = a.getY().toFloat();

	xb = b.getX().toFloat();
	yb = b.getY().toFloat();

	xc = c.getX().toFloat();
	yc = c.getY().toFloat();

	xpoint = point.getX().toFloat();
	ypoint = point.getX().toFloat();

	// Calculate area of triangle ABC
	ABC = area(xa, ya, xb, yb, xc, yc);

	// Calculate area of triangle PBC
	PBC = area(xpoint, ypoint, xb, yb, xc, yc );

	// Calculate area of triangle PAC
	PAC = area(xa, yb, xpoint, ypoint, xc, yc);

	// Calculate area of triangle PAB
	PAB = area(xa, ya, xb, yb, xpoint, ypoint);

	// Check if sum of PBC, PAC and PAB is same as ABC
	if (ABC == PBC + PAC + PAB)
		return ( true );
	else
		return ( false );
}

/*
Input: A = (0, 0), B = (10, 30), C = (20, 0), P(10, 15)
Output: Inside
		Explanation:
B(10,30)
				/ \
               /   \
              /     \
             /   P   \      P'
			/         \
     A(0,0) ----------- C(20,0)

Input: A = (0, 0), B = (10, 30), C = (20, 0), P(30, 15)
Output: Outside
		Explanation:
B(10,30)
				/ \
               /   \
              /     \
             /       \      P
			/         \
     A(0,0) ----------- C(20,0)


 Source:
 https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/
 https://www.khanacademy.org/math/cc-sixth-grade-math/x0267d782:cc-6th-plane-figures/cc-6th-area-triangle/v/example-finding-area-of-triangle
 */

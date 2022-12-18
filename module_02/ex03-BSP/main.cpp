//
// Created by Lowell Zima on 12/18/22.
//

#include "Fixed.hpp"
#include "Point.hpp"

int main() {
	Point a(0, 0);
	Point b(20, 0);
	Point c(10, 30);
	Point point(10, 30);

	std::cout << "Input: Inside = (0, 0), B = (10, 30), C = (20, 0), P(10, 15)" << std::endl;
	if ( bsp(a, b, c, point) )
	std::cout <<"Inside";
	else
	std::cout <<"Not Inside";

	return 0;
}


/*
Input: Inside = (0, 0), B = (10, 30), C = (20, 0), P(10, 15)
Output: Inside
		Explanation:
			 B(10,30)
				/ \
               /   \
              /     \
             /   P   \
			/         \
     A(0,0) ----------- C(20,0)

Input: Outside = (0, 0), B = (10, 30), C = (20, 0), P(30, 15)
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
 */

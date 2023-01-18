//
// Created by Lo on 18/01/2023.
//

/*
 * Base * generate(void);
 * It randomly instanciates A, B or C and returns the instance as a Base pointer.
 * Feel free to use anything you like for the random choice implementation.
 *
 * void identify(Base* p);
 * It prints the actual type of the object pointed to by p: "A", "B" or "C".
 *
 * void identify(Base& p);
 * It prints the actual type of the object pointed to by p: "A", "B" or "C".
 *
 * Using a pointer inside this function is forbidden.
 *
 * Including the type info header is forbidden.
 *
 * Write a program to test that everything works as expected.

 */
#include <random>
#include <iostream>

//parent
class Base {
public:
	virtual ~Base() {};
};
//children
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate(void) {

	std::random_device rd;
	int ret;
	ret = rd() % 3;
	if (ret == 0)
		return (new A);
	if (ret == 1)
		return (new B);
	if (ret == 2)
		return (new C);
	return NULL;
}

void identify(Base *p) {
	std::cout << "Identify Class pointer: " << p << " = ";
	if (!dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (!dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (!dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	std::cout << "Identify Class reference: ";

	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast const &e) {}

	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast const &e) {}

	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast const &e) {}
}

int main(void)
{
	Base	*base;

	base = generate();
	if (base == NULL)
		return (1);

	std::cout << "-" << std::endl;
	identify(base);
	std::cout << "-" << std::endl;
	identify(*base);
	std::cout << "-" << std::endl;

	delete base;
	return (0);
}

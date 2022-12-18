Introduction to Fixed Point Number Representation


# Exercise 00: My First Class in
## Orthodox Canonical Form:

* Default constructor
* Copy constructor
* Copy assignment operator
* Destructor

[Source](https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html) : fixed-point numbers



### Private members:
* An integer to store the fixed-point number value.
`int					_value;`
* A static constant integer to store the number of fractional bits. Its value will always be the integer literal 8 `static int const 	_bit = 8;`

### Public members:
* A default constructor that initializes the fixed-point number value to 0.
```CPP
Fixed::Fixed (): _value(0) {
	std::cout << "Default constructor called" << std::endl;
} 
```
* A copy constructor.
```CPP
Fixed::Fixed ( const Fixed &obj ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}
```
* A copy assignment operator overload.
```CPP
Fixed &Fixed::operator=( const Fixed &obj ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(obj.getRawBits());
	return ( *this );
} 
```
* A destructor.
```CPP
Fixed::~Fixed () {
	std::cout << "Deconstructor called" << std::endl;
}
```
* A member function `int getRawBits( void ) const;`
that returns the raw value of the fixed-point value.
```CPP
int Fixed::getRawBits ( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}
 ```
* A member function `void setRawBits( int const raw );`
that sets the raw value of the fixed-point number.
```CPP
void Fixed::setRawBits(const int raw) {
	this->_value = raw;
}
```
So, in the main, we have:
```
Fixed a;        // constructor
Fixed b( a );   // copy of constructor
Fixed c;        // c will be assign assign with 'operator='
 
c = b;          
```

# Exercise 01: Towards a more useful fixed-point number class

## Lossy Conversion of Fixed-Point Numbers

### float-to-fixed-point conversion
```CPP
Fixed::Fixed(const int i) { // converts int -> fixed-point value
	std::cout << "Int constructor called" << std::endl;
	this->_value = i << this->_bit;
}
```

### fixed-point-to-float conversion
```CPP
Fixed::Fixed(const float f) { // converts float -> fixed-point value
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * (1 << this->_bit));
}
```
`float roundf( float arg );` </br>
Computes the nearest integer value to arg (in floating-point format), rounding halfway cases away from zero, regardless of the current rounding mode.



[Source](https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/)

---

### What is a operator overloading ?

In C++, operator overloading is a technique that allows you to define the behavior of an 
operator for a specific class or data type. This means that you can use an operator such as 
+, -, *, /, etc. with objects of this class in a similar way to its use with primitive 
data types such as int, float, etc.

Here is a simple example of operator overloading in C++:
```CPP
#include <iostream>

class Complex
{
  public:
    double real, imag;

    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex &other)
    {
        return Complex(real + other.real, imag + other.imag);
    }
};

int main()
{
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = c1 + c2; // uses the overloaded operator

    std::cout << c3.real << " " << c3.imag << std::endl; // prints "4 6"

    return 0;
}
```

In this example, we have defined an overloaded + operator for the Complex class 
that allows us to add two objects of this class. We can use this operator as if 
it were a standard operator, using the objects c1 and c2 as operands. 
The operation c1 + c2 will use the operator+ function defined in the Complex 
class to perform the addition of the complex numbers c1 and c2.

It is important to note that you cannot overload all C++ operators arbitrarily. 
Some rules are applied to determine which operators can be overloaded and 
how they should be implemented. You can learn more about the rules for 
operator overloading in C++ by consulting the documentation of your compiler 
or by reading online tutorials.

### What's the difference between `Fixed &operator=(const Fixed &obj);` & `Fixed operator+(const Fixed &obj) const;` ?
#### What is `Fixed &operator=(const Fixed &obj);`? (in ex01)
It is a member function that overloads the assignment operator = for the Fixed 
class. This function assigns the value of the Fixed object passed as an argument 
(obj) to the object on which the function is called, and returns a reference 
to the object.

```CPP
Fixed a(10), b(20);
a = b; // Now a and b have the same value
```
#### What is `Fixed operator+(const Fixed &obj) const;` ? (in ex02)
On the other hand, Fixed operator+(const Fixed &obj) const; is a member function 
that overloads the addition operator + for the Fixed class. This function adds 
the value of the Fixed object passed as an argument (obj) to the object on which 
the function is called, and returns a new Fixed object with the result of the 
addition.

```CPP
Fixed a(10), b(20);
Fixed c = a + b; // c has a value of 30
```
#### What's the main difference ?
The main difference between these two functions is that the assignment operator `= `
modifies the object on which it is called, while the addition operator `+` returns 
a new object with the result of the operation.



ChatGPT Dec 15 Version

Initialisation list in `.hpp`, no need to write it in `.cpp`
[Source](https://www.learncpp.com/cpp-tutorial/constructor-member-initializer-lists/)

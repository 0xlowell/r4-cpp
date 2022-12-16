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


# Table of contents:

* Take me to [m01-ex00 | BraiiiiiiinnnzzzZ](#m01-ex00)
* Take me to [m01-ex01 |  Moar brainz!](#m01-ex01)
* Take me to [m01-ex02 | HI THIS IS BRAIN](#m01-ex02)
* Take me to [m01-ex03 | Unnecessary violence](#m01-ex03)
* Take me to [m01-ex04 | Sed](#m01-ex04)
* Take me to [m01-ex05 | Harl](#m01-ex05)
* Take me to [m01-ex06 | Harl Filter](#m01-ex06)

<a name="m01-ex00"> </a>
# m01->ex00 - BraiiiiiiinnnzzzZ


This first exercise asks us to simply create a bunch of classes with basic methods we will use in future exercises in the module. We must have two ways of allocating instances of the class: either on the stack or on the heap, and free the allocated space at the right time.</br>
[More infos on Stack vs Heap Memory Allocation here](https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/)

## Class Zombie
*From Subject:*
```
First, implement a Zombie class. It has a string private attribute name.
Add a member function void announce( void ); to the Zombie class. Zombies
announce themselves as follows:

<name>: BraiiiiiiinnnzzzZ...

```

The Zombie class will have :
* His constructor `Zombie(std::string name);`
```CPP
Zombie::Zombie(std::string name): _name(name) {
	std::cout << "Constructor Zombie" << std::endl;
	return;
}
```
* His destructor `~Zombie(void);`
```CPP
Zombie::~Zombie() {
	std::cout << "Destructor: Delete Zombie: " << this->_name << std::endl;
	return;
}
```
* Member fonction `void announce(void);`
```CPP
void Zombie::announce() {
	std::cout << this->_name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}
```
* Private data member `std::string _name;`

## Add Zombie on the stack in the `main`
With his constuctor `Zombie(std::string name)` (here without `announce()` fonction), a constructor Zombie with `std::string =` `"Bob"` will be allocated on the stack (in the main).</br>
[More infos on constructors here](https://www.geeksforgeeks.org/constructors-c/)

Like this:
```CPP
int	main() {
	Zombie("Bob");
}
```
Output:
```
Constructor Zombie
Destructor: Delete Zombie: Bob
```


## Add Zombie on the heap in `randomChump`

*From Subject:*
```
Then, implement the two following functions:

• Zombie* newZombie( std::string name );

It creates a zombie, name it, and return it so you can use it outside of the function 
scope.

• void randomChump( std::string name );

It creates a zombie, name it, and the zombie announces itself.
```
So, those two functions are in our header, outside of the scop of the class Zombie.
```CPP
Zombie* newZombie( std::string name );
```
This one will return a `new Zombie(name)`, because `new` creates and initializes objects with dynamic storage duration, that is, objects whose lifetime is not necessarily limited by the scope in which they were created. And there, it will return `Zombie *` = Zombie(name) wich is our constructor here.

```CPP
void randomChump( std::string name );
```
Using the `newZombie(name)` inside `randomChump` to allocate `Zombie()` in the heap, where it needs to be destroy by a `delete`.</br></br>
**Output:**
```
newZombie name:
Booby
Constructor Zombie
Booby: BraiiiiiiinnnzzzZ...
Destructor: Delete Zombie: Booby
```
<a name="m01-ex01"> </a>
# m01->ex01 -  Moar brainz!

This second exercise consists of creating a method that will summon N zombies in one go, without naming each one of them. Then they all announce themselves and are properly destroyed.
## Member fonction `zombieHorde`

```CPP
Zombie* zombieHorde( int nbr, std::string name )
{
	Zombie* z = new Zombie[nbr]; // z is a pointer for a tab of nbr

	for (int i = 0; i < nbr; ++i) // So incrementation is possible
		z[i].setName(name); // setName, fonction member of the class Zombie, can be accessed using the dot .
	return (z);
}
```

```CPP

int	main()
{
	Zombie 		*horde_ptr;
	int		nbr = 5;
	std::string	name = "Bobette"

	horde_ptr = zombieHorde(nbr, name); 

	for (int i = 0; i < nbr; i++)
		horde_ptr[i].announce();
	delete[] horde_ptr; // to delete all Zombie *horde_ptr, delete[] can be use
}
```
Here, if `delete[]` isn't use, destructor won't be able to erase.
[More infos for delete[] here](https://en.cppreference.com/w/cpp/language/delete)

**Output:**
```
Constructor Zombie
Constructor Zombie
Constructor Zombie
Constructor Zombie
Constructor Zombie
Bobette: BraiiiiiiinnnzzzZ...
Bobette: BraiiiiiiinnnzzzZ...
Bobette: BraiiiiiiinnnzzzZ...
Bobette: BraiiiiiiinnnzzzZ...
Bobette: BraiiiiiiinnnzzzZ...
Destructor: Delete Zombie: Bobette
Destructor: Delete Zombie: Bobette
Destructor: Delete Zombie: Bobette
Destructor: Delete Zombie: Bobette
Destructor: Delete Zombie: Bobette
```
In my files, you will be able to set name and number in the process.
<a name="m01-ex02"> </a>
# m01-ex02 - HI THIS IS BRAIN

This next exercise is super simple, it only aims to differentiate between pointers and references.

```CPP

int main()
{
	std::string str = "HI THIS IS BRAIN"; //A string variable initialized to "HI THIS IS BRAIN".

	std::string *strPTR = &str;//stringPTR: A pointer to the string.

	std::string &strREF = str;//stringREF: A reference to the string.

	std::cout << "The memory address of the string variable:\t&str = "; 	//Output: 0x7ffeeba33938
	std::cout << &str << std::endl;

	std::cout << "The memory address held by strPTR:\t\tstrPTR = ";		//Output: 0x7ffeeba33938
	std::cout << strPTR << std::endl;

	std::cout << "The memory address held by strREF:\t\t&strREF = ";	//Output: 0x7ffeeba33938
	std::cout << &strREF << std::endl;

	std::cout << "The value of the string variable:\t\tstr = ";		//Output: HI THIS IS BRAIN
	std::cout << str << std::endl;

	std::cout << "The value pointed to by strPTR:\t\t\t*strPTR = ";		//Output: HI THIS IS BRAIN
	std::cout << *strPTR << std::endl;

	std::cout << "The value pointed to strREF:\t\t\tstrREF =";		//Output: HI THIS IS BRAIN
	std::cout << strREF << std::endl;
}
```
<a name="m01-ex03"> </a>
# m01-ex03 - Unnecessary violence

This one extends the concepts of references and pointers from the previous exercise, creating two types of humans in two classes that can attack each other with different weapons.

In the subject, this main is expected:

```CPP
int main() {

	Weapon club = Weapon("crude spiked club"); //Object club from class Weapon
	HumanA bob("Bob", club); //Object bob
	bob.attack(); //attack() part of HumanA class
	club.setType("some other type of club"); // setType part of Weapon class
	bob.attack(); //attack part of HumanA class


	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club); //setWeapon() part of HumanB class
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}
```

**Output:**
```
Bob attacks with his crude spiked club
Bob attacks with his some other type of club
Jim attacks with his crude spiked club
Jim attacks with his some other type of club
```

*From subject:*
```
In which case do you think it would be best to use a pointer to Weapon? 
And a reference to Weapon? 
Why? 
Think about it before starting this exercise.
```


<a name="m01-ex04"> </a>
# m01-ex04 - Sed
[Sed ?](https://en.wikipedia.org/wiki/Sed)</br>
Recode `replace` fonction to change all occurrences in one `x` file, save them into a `x.replace` file.
Using stream fonctions, and string manipulations, such as:

## `std::ifstream file(filename);`
`std::ifstream` is a class in the C++ standard library that allows you to read from files. The file variable that you've declared is an object of this class, and the `(filename)` part after the class name is an argument passed to the constructor, which initializes the object by opening the file with the specified `filename` for reading.
For example: 
```CPP
#include <fstream>
#include <iostream>
#include <string>

int main() {
  // Open the file "hello.txt" for reading.
  std::ifstream file("hello.txt");

  // Check if the file was opened successfully.
  if (!file) {
    std::cerr << "Error opening file!" << std::endl;
    return 1;
  }

  // Read the file line by line.
  std::string line;
  while (std::getline(file, line)) {
    std::cout << line << std::endl;
  }

  // Close the file.
  file.close();

  return 0;
}
```

## `std::ofstream replace(filename + ".replace");`
`std::ofstream` is a class in the C++ standard library that allows you to write to files. The replace variable that you've declared is an object of this class, and the `(filename + ".replace")` part after the class name is an argument passed to the constructor, which initializes the object by opening the file with the specified `filename` plus the `".replace"` suffix for writing.
For example :
```CPP
#include <fstream>
#include <iostream>
#include <string>

int main() {
  // Open the file "hello.txt.replace" for writing.
  std::ofstream replace("hello.txt.replace");

  // Check if the file was opened successfully.
  if (!replace) {
    std::cerr << "Error opening file!" << std::endl;
    return 1;
  }

  // Write to the file.
  replace << "Hello, world!" << std::endl;

  // Close the file.
  replace.close();

  return 0;
}
```

## `find` `erase` `insert` string manipulation

`find`
```CPP
i = buffer.find(s1, i);
/*
* find is a method of the std::string class that searches for the first
* occurrence of a substring within a string and returns the index of the
* first character of the found substring. If the substring is not found,
* the find method returns a special value called npos, which is a static
* member of the std::string class with the value std::string::npos
*/
if (i == std::string::npos)
	break;
```

`erase`
```CPP
buffer.erase(i, s1.length());
/*
* std::string::erase
* allows you to remove part of a string. It takes as arguments the index
* of the character to start the removal from, and the number of characters
* to remove.
* The std::string::erase function can be used to remove characters from a
* string, or to remove a substring by specifying the starting index and
* the length of the substring to remove. It is often used in C++ programs
* to manipulate strings.
*/
```
`insert`
```CPP
buffer.insert(i, s2);
/*
* std::string::insert inserts a specified number of copies of a given
* string or character at a specified position in the string.
*/
```

<a name="m01-ex05"> </a>
# m01-ex05 - Harl

How to implement a tab, containing pointer's fonctions, such as `_call[0].fn = &Harl::debug;`

To simply, our tab will be 4 struct with a string variale `logname` and a proto of a pointer to a member fonction of `Harl` class: `void (Harl::*fn)( void );`
And this tab, will also be a variable member of `Harl` class.

Here, `_call[0].fn = &Harl::debug;` means : in our tab of struct `_call`, at 0, the `fn` fonction pointer refers to a fonction of `Harl` class: `Harl::debug`.

To use it, with the right address:
* `(this->*(_call[i].fn))();`
Here, the first resolution will be `_call[i].fn`, it will select `Harl::debug`.
* `(this->*(Harl::debug))();`
Now we have `this` and `->*` to explain:
* The `this` keyword refers to the current object, so `Harl`
* `->*` is the pointer-to-member fonction, define in class as `void (Harl::*fn)( void );`.

In an another case:
```CPP
class MyClass
{
public:
    void myFunction() { std::cout << "Hello, World!" << std::endl; }

    void callFunction(void (MyClass::*fn)())
    {
        (this->*fn)();
    }
};

int main()
{
    MyClass obj;
    obj.callFunction(&MyClass::myFunction);

    return 0;
}
```

In this example, the `callFunction` method takes a pointer to a member function of `MyClass` as its argument. Inside `callFunction`, the pointer is called using the `this->*fn` syntax. This will call the member function that was passed to `callFunction`, which in this case is `myFunction`. When run, this code will print `"Hello, World!"` to the console.

*It's worth noting that this syntax can be somewhat complex and is not commonly used in modern C++ programming. In most cases, it is better to use regular function pointers or, even better, to use modern C++ features such as lambdas or `std::function` to avoid the need for pointers to member functions altogether.*

Then, in this exercice:
```CPP
void Harl::complain( std::string level )
{
	for (int i = 0; i < 4; i++)
	{
		if (_call[i].logname.compare(level) == 0 ) {
			(this->*(_call[i].fn))();
			return ;
		}

	}
	std::cout << "OTHER: WESHing stuff around... ALORS !" << std::endl;
}
```

<a name="m01-ex06"> </a>
# m01-ex06 - Harl Filter

In this one, it's to learn how to use a `switch`
```CPP

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
	/*
	 * logindex will be equal to 0 to 3,
	 * and, if logindex == 1, it will call case 0 and 1;
		case 0:
			(this->*(_call[0].fn))();
		case 1:
			(this->*(_call[1].fn))();
		case 2:
			(this->*(_call[2].fn))();
		case 3:
			(this->*(_call[3].fn))();
			break; //otherwise, it will also print default.
		default:
			std::cout << "Probably WESHing stuff around... !" << std::endl;
	}
}
```

**Output:
```
Constructor called
(0) Level: (1) ERROR + (2) WARNING + (3) INFO + (4) DEBUG
DEBUG

[DEBUG]: WESH le Debug
[INFO]: WESH l'Info
[WARNING]: WESH le Warning
[ERROR] WESH l'Error

Destructor Harl called
```
PS : there is no logic in content, sry...


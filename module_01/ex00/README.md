# Table of contents:

* Take me to [m01->ex00 - BraiiiiiiinnnzzzZ](#m01->ex00)
* Take me to [m01->ex01 -  Moar brainz!](#m01->ex01)
* Take me to [m01-ex02 - HI THIS IS BRAIN](#m01->ex02)
* Take me to [m01-ex03 - Unnecessary violence](#m01->ex03)


<a name="m01->ex00"> </a>
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
<a name="m01->ex01"> </a>
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
<a name="m01->ex02"> </a>
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
<a name="m01->ex03"> </a>
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




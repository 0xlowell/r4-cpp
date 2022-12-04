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


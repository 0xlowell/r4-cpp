| CPP exercices |     Notions    | CPP modules |
|----------|----------|----------|
| [ex01 - PhoneBook](https://github.com/Elwoll/r4-cpp/tree/main/module_00/ex01) | Start using class | [module00](https://github.com/Elwoll/r4-cpp/tree/main/module_00) |


My Awesome PhoneBook
---
```
"Write a program that behaves like a crappy awesome phonebook software !"`

Class PhoneBook: with an array of 8 contacts max. (9th contact will overwrite the first one)

Class Contact: the phonebook contact

In your code, the phonebook must be instantiated as an instance of the PhoneBook
class. Same thing for the contacts. Each one of them must be instantiated as an instance
of the Contact class. You’re free to design the classes as you like but keep in mind that
anything that will always be used inside a class is private, and that anything that can be
used outside a class is public. </br>
On program start-up, the phonebook is empty and the user is prompted to enter one
of three commands. The program only accepts ADD, SEARCH and EXIT.

```




ADD: save a new contact
---
```
* If the user enters this command, they are prompted to input the information
of the new contact one field at a time. Once all the fields have been completed,
add the contact to the phonebook.
* The contact fields are: first name, last name, nickname, phone number, and
darkest secret. A saved contact can’t have empty fields.
```

|Declare in `private:` in `Contact.hpp`|
|:--|

In the `class Contact`: set as `private:` the following variables and fonctions to get access to those private variables.</br>

* `std::string _firstname;`, and so on (...)</br> 
*  `bool _iscontact;` for a switch purpose.</br>


|Declare in `public:` in `Contact.hpp`|
|:--|

Here the fonction `getFirstname` will return the private variable `_firstname` when needed outside of `class Contact`.</br>

* `std::string getFirstname(void);` (...)</br>
* `bool getContact(void);`</br>

This one will update variables, called in `void PhoneBook::addContact(int i)`:

* `void Contact::updateContact(`</br>`std::string _firstname,` </br>
`std::string _lastname,`</br>
`std::string _nickname,`</br>
`std::string _phone_number,`</br>
`std::string _darkest_secret,`</br>
` bool _iscontact)`</br>

Finaly, declare `Contact()` (a constructor) and `~Contact()` (his destructor).

---

|What is the difference between class and a constructor?!|
|:--|

In simple words a class is like a blueprint and defines the framework that other objects can inherit, a constructor is something that actually creates the object in the program whereas the class only gives the guidelines.
The class is define in the `.hpp` and the constructor will be set in the `.cpp` as: </br>`Contact::Contact(void) : _iscontact(0) `</br>`{ return; }`</br>

Same thing with structures in C, </br>`.hpp`: `typedef struct s_contact` </br> 
 `.cpp` `t_contact contact;`  </br>

|What is an Initializer List ?|
|:--|

`... : _iscontact(0)` </br>
In this way, we set up an Initializer List, to give `_iscontact` the value `0`.</br>
Look at [studies/Sample.cpp](https://github.com/Elwoll/r4-cpp/blob/main/studies/Sample.cpp) file for more details.



</br> All set to begin `.cpp` file.

---

|Call in `Contact.cpp`|
|:--|

* As write above, we call `Contact::Contact(void)` and `Contact::~Contact` at first in the `.cpp`file, who just `return;`

* Then, call `std::string Contact::getFirstname()`, it will return a pointer on private variable `_firstname`: </br>

```C
std::string Contact::getFirstname()
{
	return (this->_firstname);
}
```

Same for every private variables on `class Contact`</br>
	
* Those fonctions will be called in `void PhoneBook::printContact(int i)`, like that:</br>

```CPP
	std::cout << std::endl << "First name:";
	std::cout << this->contact[i].getFirstname() << std::endl;
```

* `this->contact[i]`: a pointer to contact index (i is incremented in the main) where `contact[i]` is a `std::string` like `std::string _firstname`

* Then, this fonction will set values gathered to assign them to each `_firstname` private variables.

```C 

void Contact::updateContact(std::string fn,
				std::string ln,
				std::string nn,
				std::string pn,
				std::string ds,
				bool ic)
{
this->_firstname = fn;
this->_lastname = ln;
this->_nickname = nn;
this->_phone_number = pn;
this->_darkest_secret = ds;
this->_iscontact = ic;
	return;
}
```

|Declare in `public:` in `PhoneBook.hpp`|
|:--|

```C
void	addContact(int) // will gather all informations entered though the terminal input
void	printContact(int) // print all infos
```

Those two will get though the process end:</br> 
* `void PhoneBook::addContact(int i)` will get input with a `getLine`</br>
* `void	printContact(int)` will print all infos when called.</br>

*`void printIndex();` will be used for the SEARCH operation.*


|Declare in `private:` in `PhoneBook.hpp`|
|:--|

```C
Contact contact[8]; // only 8 contacts possible for the exercice.
```

|Call in `PhoneBook.cpp`|
|:--|

Gather input with a `std::getline` :

* `void PhoneBook::addContact(int i)` </br>

```C
std::string fn;

std::cout << "First name:";
	std::getline(std::cin, fn);
	if (!std::cin) std::exit(0);
```

Then, with the pointer on `this->contact[i]` and the `updateContact(...)`:</br>
every infos will be stored into a Contact class.


* `void	printContact(int)` </br>

```C
std::cout << std::endl << "First name:";
	std::cout << this->contact[i].getFirstname() << std::endl;
```


---

SEARCH
---
```
SEARCH: display a specific contact
◦ Display the saved contacts as a list of 4 columns: index, first name, last
name and nickname.
◦ Each column must be 10 characters wide. A pipe character (’|’) separates
them. The text must be right-aligned. If the text is longer than the column,
it must be truncated and the last displayable character must be replaced by a
dot (’.’).
◦ Then, prompt the user again for the index of the entry to display. If the index
is out of range or wrong, define a relevant behavior. Otherwise, display the
contact information, one field per line.
```


Only the following fonctions are used to `SEARCH`, thanks to our contact[8]
```C
void	search(PhoneBook *pb)
{
	std::string line;
	int i;

	pb->printIndex();
	std::cout << " Contact index ? :";
	std::getline(std::cin, line);
	i = line[0] - '0';
	if (line[1] == 0 && i >= 0 && i <= 7)
		pb->printContact(i);
	else
		std::cerr << line << " is an invalid index." << std::endl;
}
```
EXIT
---
```
◦ The program quits and the contacts are lost forever!
```
Made with:
```C
else if (line.compare("EXIT") == 0)
	std::exit(0);
```


Notions: 
---

|fonctions|.include |notions|
--:|:--|:--
|`std::string` | `<iostream>` `<string>`| Standard output stream oriented to narrow characters (of type char). It corresponds to the C stream stdout. |
|`std::getline(istream& is, string& str);`| `<string>`| Extracts characters from is and stores them into str |
|`std::cerr`|`<iostream>`|The standard error stream is a destination of characters determined by the environment. |
|`std::string::length`| `string`|Returns the length of the string, in terms of bytes.|



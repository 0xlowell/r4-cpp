| CPP exercices |     Notions    | CPP modules |
|----------|----------|----------|
| [ex01 - PhoneBook](https://github.com/Elwoll/r4-cpp/tree/main/module_00/ex01) | Basics notions of cpp  | [module00](https://github.com/Elwoll/r4-cpp/tree/main/module_00) |

Notions: 
---

|fonctions|include|notions|
:--|:--|:--
|`std::string` | `<iostream>` `<string>`| Standard output stream oriented to narrow characters (of type char). It corresponds to the C stream stdout. |
|`std::getline`|




|.cpp| .hpp  | descriptions |
|:--|:--|:--
|`Contact::Contact(void)`| `class Contact` `public:`| Constructor: Class instance by `class Contact`, and set `bool _iscontact` to `0` like this : `Contact::Contact(void) : _iscontact(0)` |
|`Contact::~Contact()`| `class Contact` `public:`| Destroyer: with the `~`

ADD
---

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
				bool ic) :
				_firstname(fn),
				_lastname(ln),
				_nickname(nn),
				_phone_number(pn),
				_darkest_secret(ds),
				_iscontact(ic)
{
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
`void PhoneBook::addContact(int i)` will get input with a `getLine`</br>
`void	printContact(int)` will print all infos when called.

|Declare in `private:` in `PhoneBook.hpp`|
|:--|
```C
Contact contact[8]; // only 8 contacts possible for the exercice.
```

|Call in `PhoneBook.cpp`|
|:--|

With the pointer on `this->contact[i]`, every infos will be stored into a Contact class.  

---

SEARCH
---

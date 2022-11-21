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

---

|What is an Initializer List ?|
|:--|

`... : _iscontact(0)` </br>
In this way, we set up an Initializer List, with `_iscontact` as a part of the `class Contact` to give it the value `0`.
Look at [studies/Sample.cpp](https://github.com/Elwoll/r4-cpp/blob/main/studies/Sample.cpp) file for more details.



</br> All set to begin `.cpp` file.

---

|Call in `Contact.cpp`|
|:--|

Return a pointer on private variable:</br>
`std::string Contact::getFirstname(){`</br>
`return (this->_firstname); }`</br>
	
Called in `void PhoneBook::printContact(int i)`, like that:</br>
`std::cout << std::endl << "First name:";`</br>
`std::cout << this->contact[i].getFirstname() << std::endl;`</br>

`this->contact[i]`: a pointer to contact index (i is incremented in the main) where `contact[i]` is a `std::string` like `std::string _firstname`


SEARCH
---

---
`updateContact` will be call in `void PhoneBook::addContact(int i)` in `Phonebook.cpp` </br>
{</br>
Declared: `std::string fn;`,... will store input gather with `std::getline(std::cin, fn);`</br>


|Constructor version used:|  Constructor version used | Details
:--|:--|:--
| `();` | ***empty string constructor*** | Constructs an empty string, with a length of zero characters.|
| `(const string& str);` | ***copy constructor*** | Constructs a copy of str. |
| `(const string& str,` </br>`size_t pos,` `size_t len = npos)`| ***substring constructor***| Copies the portion of str that begins at the character position pos and spans len characters (or until the end of str, if either str is too short or if len is string::npos).|
|`(const char* s);`| ***from c-string*** | Copies the null-terminated character sequence (C-string) pointed by s.|
|`(const char* s, size_t n);`|***from buffer***|Copies the first n characters from the array of characters pointed by s.|
||


Examples:
--- 
| fonctions | example |
:--|:--
`std::cout` | `std::cout << "Hello World" << std::endl;`              



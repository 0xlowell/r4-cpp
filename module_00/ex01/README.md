| CPP exercices |     Notions    | CPP modules |
|----------|----------|----------|
| [ex01 - PhoneBook](https://github.com/Elwoll/r4-cpp/tree/main/module_00/ex01) | Basics notions of cpp  | [module00](https://github.com/Elwoll/r4-cpp/tree/main/module_00) |

Notions: 
---

|fonctions|include|notions|
:--|:--|:--
|`std::string` | `<iostream>` `<string>`| Standard output stream oriented to narrow characters (of type char). It corresponds to the C stream stdout. |




|.cpp| .hpp  | descriptions |
|:--|:--|:--
|`Contact::Contact(void)`| `class Contact` `public:`| Constructor: Class instance by `class Contact`, and set `bool _iscontact` to `0` like this : `Contact::Contact(void) : _iscontact(0)` |
|`Contact::~Contact()`| `class Contact` `public:`| Destroyer: with the `~`


**`.hpp`**In the `class Contact`: </br> We need to set as `private:` the following variables and fonctions to get access to those private variables :</br></br>
`std::string _firstname;`</br>
`std::string _lastname;`</br>
`std::string _nickname;`</br>
`std::string _phone_number;`</br>
`std::string _darkest_secret;`</br>
`bool _iscontact;`</br>

`std::string Contact::getFirstname(){
	return (this->_firstname);
}`

Here the `getFirstname` will return the private variable `_firstname` when needed outside of `class Contact`.

`void Contact::updateContact(`</br>`std::string _firstname,` </br> `std::string _lastname,`</br>`
							std::string _nickname,`</br>` std::string _phone_number,`</br>`
							std::string _darkest_secret,`</br>` bool _iscontact)`
</br>
</br>
With `updateContact`, 


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



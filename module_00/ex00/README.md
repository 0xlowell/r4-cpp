| CPP exercices |     Notions    | CPP modules
|----------|----------|----------|
| [ex00 - megaphone](https://github.com/Elwoll/r4-cpp/tree/main/module_00/ex00) | Basics notions of cpp  | [module00](https://github.com/Elwoll/r4-cpp/tree/main/module_00) |

Notions: 
---
</br>


`std::cout` 
--- exemple : `std::cout << "Hello World" << std::endl;`) `#include <iostream>`
</br>
Object of class ostream that represents the standard output stream oriented to narrow characters (of type char). It corresponds to the C stream stdout.

The standard output stream is the default destination of characters determined by the environment. This destination may be shared with more standard objects (such as cerr or clog).

As an object of class ostream, characters can be written to it either as formatted data using the insertion operator (operator<<) or as unformatted data, using member functions such as write.

The object is declared in header <iostream> with external linkage and static duration: it lasts the entire duration of the program.
</br>
</br>

`std::endl` (ex: `std::cout << "Hello World" << std::endl;`) `#include <ostream> <iostream>`

`std::string` (ex: `std::string str = argv[i];`) `#include <string>`
---
Strings are objects that represent sequences of characters.
</br>

std::string.lenght() (ex: `str.length()`)  
---
Returns the length of the string, in terms of bytes.

This is the number of actual bytes that conform the contents of the string, which is not necessarily equal to its storage capacity.

`size_t length() const;`
</br>

std::toupper(std::string str[i])

| CPP exercices |     Notions    | CPP modules |
|----------|----------|----------|
| [ex00 - megaphone](https://github.com/Elwoll/r4-cpp/tree/main/module_00/ex00) | Basics notions of cpp  | [module00](https://github.com/Elwoll/r4-cpp/tree/main/module_00) |

Notions: 

</br>

---
| Function | Exemple | #include | 
|----------|----------|----------|--|
| `std::cout` | `std::cout << "Hello World" << std::endl;` | `<iostream>` |

Object of class ostream that represents the standard output stream oriented to narrow characters (of type char). It corresponds to the C stream stdout.</br>

The standard output stream is the default destination of characters determined by the environment. This destination may be shared with more standard objects (such as cerr or clog).</br>

As an object of class ostream, characters can be written to it either as formatted data using the insertion operator (operator<<) or as unformatted data, using member functions such as write.</br>

The object is declared in header `<iostream>` with external linkage and static duration: it lasts the entire duration of the program.

--- 
</br>
</br>

| Function | Exemple | #include |
|----------|----------|----------|
| `std::endl`  | `std::cout << "Hello World" << std::endl;` |  `<ostream> <iostream>` |

Inserts a new-line character and flushes the stream. </br>
</br>

---
</br>
</br>

 Function | Exemple | #include |
|----------|----------|----------|
| `std::string`   | `std::string str = argv[i];` |   `<string>` |

Strings are objects that represent sequences of characters.
</br>

Function | Exemple | #include |
|----------|----------|----------|
| `std::string.lenght`   | `str.length()` |   `<string>` |

Returns the length of the string, in terms of bytes.</br>

This is the number of actual bytes that conform the contents of the string, which is not necessarily equal to its storage capacity.</br>

No parameters needed.</br>

---
</br>
</br>

Function | Exemple | #include |
|----------|----------|----------|
| `std::toupper(c)`   | ` std::toupper(str[i])` |   `<string>` |

Converts parameter c to its uppercase equivalent if c is a lowercase letter and has an uppercase equivalent. </br>
</br>
</br>
---


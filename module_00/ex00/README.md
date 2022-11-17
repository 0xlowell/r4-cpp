| CPP exercices |     Notions    | CPP modules |
|----------|----------|----------|
| [ex00 - megaphone](https://github.com/Elwoll/r4-cpp/tree/main/module_00/ex00) | Basics notions of cpp  | [module00](https://github.com/Elwoll/r4-cpp/tree/main/module_00) |

Notions: 
---
| Function | Exemple | #include | Notions |
|----------|----------|----------|
| `std::cout` | `std::cout << "Hello World" << std::endl;` | `<iostream>` | Standard output stream oriented to narrow characters (of type char). It corresponds to the C stream stdout. |

--- 
</br>

| `std::endl`  | `std::cout << "Hello World" << std::endl;` |  `<ostream> <iostream>` | Inserts a new-line character and flushes the stream. |
|--|--|--|--|

Inserts a new-line character and flushes the stream. </br>

---
</br>

 Function | Exemple | #include |
|----------|----------|----------|
| `std::string`   | `std::string str = argv[i];` |   `<string>` |

Strings are objects that represent sequences of characters.

---
</br>

Function | Exemple | #include |
|----------|----------|----------|
| `std::string.lenght`   | `str.length()` |   `<string>` |

Returns the length of the string, in terms of bytes.</br>

This is the number of actual bytes that conform the contents of the string, which is not necessarily equal to its storage capacity.</br>

No parameters needed.</br>

---
</br>

Function | Exemple | #include |
|----------|----------|----------|
| `std::toupper(c)`   | ` std::toupper(str[i])` |   `<string>` |

Converts parameter c to its uppercase equivalent if c is a lowercase letter and has an uppercase equivalent. </br>

---
</br>


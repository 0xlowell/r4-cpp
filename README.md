# r4-cpp

[![lzima's 42 CPP Module 00 Score](https://badge42.vercel.app/api/v2/cl1nk4f8f004009lb75fyii0c/project/2774883)](https://github.com/JaeSeoKim/badge42)

# General rules

Compile your code with `c++` `-Wall -Wextra -Werror` `-std=c++98` `[-pedantic](https://stackoverflow.com/questions/2855121/what-is-the-purpose-of-using-pedantic-in-the-gcc-g-compiler)`

Write class names in UpperCamelCase format (CPP is case sensitive)

⛔️ `using namespace <ns_name>`

⛔️ `friend`

⛔️ `*printf()`, `*alloc()`, `free()`

# Modules & exercices

| CPP exercices |     Notions    | CPP modules
|----------|----------|----------|
| [ex00 - megaphone](https://github.com/Elwoll/r4-cpp/tree/main/module_00/ex00) | Basics notions of cpp  | [module00](https://github.com/Elwoll/r4-cpp/tree/main/module_00) |

Notions: 
`std::cout` Object of class ostream that represents the standard output stream oriented to narrow characters (of type char). It corresponds to the C stream stdout.

The standard output stream is the default destination of characters determined by the environment. This destination may be shared with more standard objects (such as cerr or clog).

As an object of class ostream, characters can be written to it either as formatted data using the insertion operator (operator<<) or as unformatted data, using member functions such as write.

The object is declared in header <iostream> with external linkage and static duration: it lasts the entire duration of the program.
  
`std::string` The standard string class provides support for such objects with an interface similar to that of a standard container of bytes, but adding features specifically designed to operate with strings of single-byte characters.

| CPP exercices |     Notions    | CPP modules
|----------|----------|----------|
| [ex01 - phonebook](https://github.com/Elwoll/r4-cpp/tree/main/module_00/ex01) | Implement class | [module00](https://github.com/Elwoll/r4-cpp/tree/main/module_00) |



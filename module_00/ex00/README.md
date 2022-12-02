
## m00->ex00 - Megaphone
### ./megaphone

The program will change input in lowercase on uppercase like:

### Notions resume: Megaphone
```
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP... 
```

|fonctions|include|notions|examples|
|:--|:--|:--|:--|
|`std::cout`| `<iostream>` | _Standard output stream oriented to narrow characters (of type char). It corresponds to the C stream stdout._ |`std::cout << "Hello World"`|
|`std::endl` |`<ostream> <iostream>`|_Inserts a new-line character and flushes the stream._|`std::cout << "HF" << std::endl;`|
|`std::string` | `<string>` | _Strings are objects that represent sequences of characters._|`std::string`  | `std::string str = argv[i];`|
|`std::string.lenght` | `<string>` | _Returns the length of the string, in terms of bytes._</br>|`std::string.lenght` | `str.length()`
|`std::toupper(c)`| `<string>` | _Converts parameter c to its uppercase equivalent if c is a lowercase letter and has an uppercase equivalent._ </br> | `std::toupper(c)` | `std::toupper(c)`

# Ex00-Bureaucrat

## Exception `class`

In C++, an exception is an event that occurs during the execution of a program that disrupts the normal flow of instructions. When an exception is thrown, the current function terminates and control is passed back to the calling function. If the exception is not caught by a try-catch block, the program will terminate.

An exception class is a user-defined class that is used to represent an exception. It is typically derived from the `std::exception` class, which is the base class for all standard C++ exceptions.

To create an exception class, you can define a new class that derives from `std::exception` and overload the `what()` member function to return a string describing the error. For example:

```cpp
class MyException : public std::exception {
 public:
  const char* what() const noexcept {
    return "MyException occurred";
  }
};
```

You can then throw an exception of this type using the `throw` keyword:

```cpp
throw MyException();
```

The exception can be caught by a try-catch block:

```cpp
try {
  // code that might throw MyException
} catch (MyException& e) {
  // code to handle the exception
}
```

---

- `what()`

  The `what()` member function is a virtual function that is part of the `std::exception` class in C++. It is used to return a string describing the error that occurred. This string is typically used to provide more information about the exception when it is caught by a try-catch block.

  Here is an example of a simple exception class that overloads the `what()` member function:

    ```cpp
    class MyException : public std::exception {
     public:
      const char* what() const noexcept {
        return "MyException occurred";
      }
    };
    ```

  The `noexcept` specifier in the function declaration indicates that this function will not throw any exceptions.

  To throw an exception of this type and catch it, you can use the following code:

    ```cpp
    try {
      throw MyException();
    } catch (MyException& e) {
      std::cout << e.what() << std::endl;  // Outputs "MyException occurred"
    }
    ```

  The `what()` function is called on the exception object `e` to retrieve the error message.


---

- `throw()`

  The `throw()` specifier is used in the declaration of a function to indicate that the function will not throw any exceptions. This can be useful in situations where you want to ensure that a function does not throw any exceptions, or where you want to document the fact that a function will not throw any exceptions.

  Here is an example of a function that uses the `throw()` specifier in its declaration:

    ```cpp
    void doSomething() throw() {
      // code that does not throw any exceptions
    }
    ```

  Note that the `throw()` specifier is not the same as the `noexcept` specifier, which was introduced in C++11. The `noexcept` specifier is used to indicate that a function will not throw any exceptions, and it can also be used to enable certain optimizations.

  Here is an example of a function that uses the `noexcept` specifier in its declaration:

    ```cpp
    void doSomething() noexcept {
      // code that does not throw any exceptions
    }
    ```
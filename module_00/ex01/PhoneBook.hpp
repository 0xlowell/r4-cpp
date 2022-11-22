#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:

	void addContact(int);

	void printContact(int i);

	void printIndex();

	PhoneBook(void);

	~PhoneBook(void);

private:
	Contact contact[8];
};

#endif

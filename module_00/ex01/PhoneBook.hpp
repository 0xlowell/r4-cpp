#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:
	void addContact(int);
	void printContact(void);

	PhoneBook(void);

	~PhoneBook(void);

private:
	Contact contact[8];
};

#endif
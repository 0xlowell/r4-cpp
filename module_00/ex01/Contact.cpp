
#include "Contact.hpp"
#include "PhoneBook.hpp"


Contact::Contact(void) : _iscontact(0)
{
	return;
}

Contact::~Contact()
{
	return;
}

std::string Contact::getFirstname()
{
	return (this->_firstname);
}

std::string Contact::getLastname()
{
	return (this->_lastname);
}

std::string Contact::getNickname()
{
	return (this->_nickname);
}

std::string Contact::getPhoneNumber()
{
	return (this->_phone_number);
}

std::string Contact::getDarkestSecret()
{
	return (this->_darkest_secret);
}

bool Contact::getContact()
{
	return (this->_iscontact);
}
//this-> is a pointer in cpp
void Contact::updateContact(std::string _firstname, std::string _lastname,
							std::string _nickname, std::string _phone_number,
							std::string _darkest_secret, bool _iscontact)
{
	this->_firstname = _firstname; // this->_firstname is a pointer to _firstname;
	this->_lastname = _lastname;
	this->_nickname = _nickname;
	this->_phone_number = _phone_number;
	this->_darkest_secret = _darkest_secret;
	this->_iscontact = _iscontact;
}



#include "Contact.hpp"


Contact::Contact(void) : _iscontact(0)
{
	return;
}

Contact::~Contact() {
	return;
}

std::string Contact::getFirstname() {
	return (this->_firstname);
}

std::string Contact::getLastname() {
	return (this->_lastname);
}

std::string Contact::getNickname() {
	return (this->_nickname);
}

std::string Contact::getPhoneNumber() {
	return (this->_phone_number);
}

std::string Contact::getDarkestSecret() {
	return (this->_darkest_secret);
}

bool Contact::getContact() {
	return (this->_iscontact);
}

void Contact::updateContact(std::string fn,
							std::string ln,
							std::string nn,
							std::string pn,
							std::string ds,
							bool ic)
{
							this->_firstname = fn;
							this->_lastname = ln;
							this->_nickname = nn;
							this->_phone_number = pn;
							this->_darkest_secret = ds;
							this->_iscontact = ic;
	return;
}

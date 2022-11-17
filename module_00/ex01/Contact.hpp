
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact // like a structure in C but more flexible, fonctions could be declared in class
{

private: // private variables used
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	std::string getFirstname(void);

	std::string getLastname(void);

	std::string getNickname(void);

	std::string getPhoneNumber(void);

	std::string getDarkestSecret(void);

	bool getContact(void);

	void updateContact(std::string _firstname,
					   std::string _lastname,
					   std::string _nickname,
					   std::string _phone_number,
					   std::string _darkest_secret,
					   bool _iscontact);
	Contact();
	~Contact(void); // ~is a destroyer of Contact, at std::exit() it will erase and flush all data in the class
};

#endif

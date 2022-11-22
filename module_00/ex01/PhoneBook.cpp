#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void PhoneBook::addContact(int i)
{
	std::string fn;
	std::string ln;
	std::string nn;
	std::string pn;
	std::string ds;

	std::cout << "First name:";
	std::getline(std::cin, fn);
	if (!std::cin) std::exit(0);
	std::cout << "Last name:";
	std::getline(std::cin, ln);
	if (!std::cin) std::exit(0);
	std::cout << "Nickname:";
	std::getline(std::cin, nn);
	if (!std::cin) std::exit(0);
	std::cout << "Phone number:";
	std::getline(std::cin, pn);
	if (!std::cin) std::exit(0);
	std::cout << "Darkest secret:";
	std::getline(std::cin, ds);
	if (!std::cin) std::exit(0);
	this->contact[i].updateContact(fn, ln, nn, pn, ds, 1);
}

void PhoneBook::printContact(int i)
{
	if (i < 0 || i > 7 || !this->contact[i].getContact())
	{
		std::cerr << i << " is not a valid index." << std::endl;
		return;
	}
	std::cout << std::endl << "First name:";
	std::cout << this->contact[i].getFirstname() << std::endl;
	std::cout << "Last name: ";
	std::cout << this->contact[i].getLastname() << std::endl;
	std::cout << "Nickname: ";
	std::cout << this->contact[i].getNickname() << std::endl;
	std::cout << "Phone number: ";
	std::cout << this->contact[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << this->contact[i].getDarkestSecret() << std::endl << std::endl;
}

void print_w10(std::string s)
{
	if (s.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << s[i];
		std::cout << '.';
	} else
	{
		for (int i = 0; i + s.length() < 10; i++)
			std::cout << ' ';
		std::cout << s;
	}
}

void PhoneBook::printIndex()
{
	std::cout << std::endl << "|     index|first name| last name|  nickname|"
			  << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!this->contact[i].getContact())
			break;
		std::cout << "|";
		std::cout << std::setw(10) << std::setfill(' ') << i;
		std::cout << "|";
		print_w10(this->contact[i].getFirstname());
		std::cout << "|";
		print_w10(this->contact[i].getLastname());
		std::cout << "|";
		print_w10(this->contact[i].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << std::endl;
}


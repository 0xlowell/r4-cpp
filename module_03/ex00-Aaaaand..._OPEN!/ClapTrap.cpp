//
// Created by Lowell Zima on 12/18/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit(10), _energy(10), _attack_damage(1) {
	std::cout << "Constructor for " << _name << std::endl << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor for " << _name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &cpy ) {
	std::cout << "Copy" << std::endl;
	*this = cpy;
}

ClapTrap &ClapTrap::operator = ( const ClapTrap &cpy ) {
	std::cout << "Copy assignment operator" << std::endl;
	this->_name = cpy._name;
	this->_hit = cpy._hit;
	this->_energy = cpy._energy;
	this->_attack_damage = cpy._attack_damage;
	this->lol = cpy.lol;

	return ( *this );
}

void ClapTrap::setName(std::string s) {
	this->_name = s;
}

std::string &ClapTrap::getName() {
	return (this->_name);
}

void ClapTrap::attack(const std::string &target) {

	if (_energy < 0) {
		std::cout << "No  ⚡️ energy left."
		<< std::endl<< std::endl;
	}
	else {
		std::cout
		<< " ⚔️ ClapTrap " << _name
		<< " attacks " << target
		<< ", causing " << _attack_damage << " points of damage!"
		<< std::endl << std::endl;

		_energy--;
		std::cout << _name << " ⚡️ energy: " << _energy << std::endl << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	_hit -= amount;

	if (_hit < 0) {
		std::cout << "No 🩸️ hit point left."
		<< std::endl<< std::endl;
	}

	std::cout
	<< " 🩸 ClapTrap " << _name
	<< " takes " << amount << " damage's points."
	<< std::endl << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << _name << " 🌡 hit points before Repaired: " << _hit
	<< std::endl << std::endl;

	_hit += amount;

	std::cout << " 🛡 ClapTrap " << _name << " repair himself and recover from " << amount << " hit points." << std::endl << std::endl;

	std::cout << _name << " 🌡 hit points after Repaired: " << _hit
	<< std::endl << std::endl;

	_energy--;
	std::cout << _name << " ⚡️ energy: " << _energy
	<< std::endl << std::endl;
}

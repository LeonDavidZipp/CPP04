#include "../inc/Character.hpp"
#include "../inc/AMateria.hpp"

Character::Character() {
	_name = "Default Character";
	std::cout << "Character created" << std::endl;
}

Character::Character(std::string const & name) : _name(name) {
	std::cout << "Character named\t" << this->_name << " created" << std::endl;
}

Character::Character(const Character& other) {
	std::string otherName = other.getName();
	this->_name = otherName;
	std::cout << "Character named\t" << this->_name << " created from\t" << otherName << std::endl;
}

Character::~Character() {
	std::cout << "Character named\t" << this->_name << " destroyed." << std::endl;
}

Character& Character::operator=(const Character& other) {
	std::string otherName = other.getName();

	if (this != &other) {
		this->_name = otherName;
	}

	std::cout << "Character named\t" << this->_name << " created from\t" << otherName << std::endl;
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	if (m == nullptr) {
		std::cout << "Cannot equip a null AMateria" << std::endl;
		return;
	}
	if (_materias.size() >= 4) {
		std::cout << "Cannot equip more than 4 AMaterias" << std::endl;
		return;
	}
	_materias.push_back(m);
}
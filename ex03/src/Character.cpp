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
	for (size_t i = 0; i < _materias.size(); i++) {
		if (_materias[i] != nullptr) {
			delete _materias[i];
		}
	}
	for (size_t i = 0; i < _dropped.size(); i++) {
		if (_dropped[i] != nullptr) {
			delete _dropped[i];
		}
	}
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
    for (size_t i = 0; i < _materias.size(); i++) {
        if (_materias[i] == nullptr) {
            _materias[i] = m;
			std::cout << "AMateria equipped" << std::endl;
            return;
        }
    }
    std::cout << "Cannot equip more than 4 AMaterias" << std::endl;
}

void Character::unequip(int idx) {
    if (idx < 0 || idx >= 4) {
        std::cout << "Invalid index" << std::endl;
        return;
    }
	std::cout << "AMateria unequipped: " << _materias[idx]->getType() << std::endl;
	for (size_t i = 0; i < _dropped.size(); i++) {
		if (_dropped[i] == nullptr) {
			_dropped[i] = _materias[idx];
			break;
		}
	}
    _materias[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4) {
		std::cout << "Invalid index" << std::endl;
		return;
	}
	if (_materias[idx] == nullptr) {
		std::cout << "No AMateria equipped at index " << idx << std::endl;
		return;
	}
	_materias[idx]->use(target);
}

#include "../inc/AMateria.hpp"

AMateria::AMateria() {
	_type = "Default AMateria";
	std::cout << "AMateria created" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "AMateria of type\t" << this->_type << " created" << std::endl;
}

AMateria::AMateria(const AMateria& other) {
	std::string otherType = other.getType();
	this->_type = otherType;
	std::cout << "AMateria of type\t" << this->_type << " created from\t" << otherType << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria of type\t" << this->_type << " destroyed." << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other) {
	std::string otherType = other.getType();

	if (this != &other) {
		this->_type = otherType;
	}

	std::cout << "AMateria of type\t" << this->_type << " created from\t" << otherType << std::endl;
	return *this;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

void AMateria::setType(std::string type) {
	this->_type = type;
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria of type\t" << this->_type << " used on\t" << target.getName() << std::endl;
}

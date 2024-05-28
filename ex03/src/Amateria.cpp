#include "../inc/AMateria.hpp"

AMateria::AMateria() : _type("default") {
    std::cout << "AMateria of type\t" << this->_type << " created" << std::endl;
}

AMateria::AMateria(const std::string& type) : _type(type) {
    std::cout << "AMateria of type\t" << type << " created" << std::endl;
}

AMateria::AMateria(const AMateria& other) : _type(other._type) {
    std::cout << "AMateria created from\t" << other._type << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria of type\t" << this->_type << " destroyed." << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "AMateria created from\t" << other._type << std::endl;
    return *this;
}

std::string AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter& target) {
    (void)target;
}
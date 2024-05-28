#include "../inc/Cure.hpp"

Cure::Cure() : _type("default") {
    std::cout << "Cure of type\t" << this->_type << " created" << std::endl;
}

Cure::Cure(const std::string& type) : _type(type) {
    std::cout << "Cure of type\t" << type << " created" << std::endl;
}

Cure::Cure(const Cure& other) : _type(other._type) {
    std::cout << "Cure created from\t" << other._type << std::endl;
}

Cure::~Cure() {
    std::cout << "Cure of type\t" << this->_type << " destroyed." << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "Cure created from\t" << other._type << std::endl;
    return *this;
}

std::string Cure::getType() const {
    return this->_type;
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals\t" << target->getName() << "'s wounds *" << std::endl;
}

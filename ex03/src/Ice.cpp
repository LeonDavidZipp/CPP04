#include "../inc/Ice.hpp"

Ice::Ice() : _type("default") {
    std::cout << "Ice of type\t" << this->_type << " created" << std::endl;
}

Ice::Ice(const std::string& type) : _type(type) {
    std::cout << "Ice of type\t" << type << " created" << std::endl;
}

Ice::Ice(const Ice& other) : _type(other._type) {
    std::cout << "Ice created from\t" << other._type << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice of type\t" << this->_type << " destroyed." << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "Ice created from\t" << other._type << std::endl;
    return *this;
}

std::string Ice::getType() const {
    return this->_type;
}

Ice* Ice::clone() {
    return new Ice(this->_type);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at\t" << target->getName() << " *" << std::endl;
}
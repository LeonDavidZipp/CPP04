#include "../inc/Animal.hpp"

Animal::Animal() {
    this->_type = "Default Animal";
    std::cout << "Animal of type\t" << this->_type << " created" << std::endl;
}
Animal::Animal(const std::string& type) {
    this->_type = type;
    std::cout << "Animal of type\t" << this->_type << " created" << std::endl;
}
Animal::Animal(const Animal& other) {
    std::string otherType = other.getType()
    this->_type = otherType;
    std::cout << "Animal of type\t" << this->_type << " created from\t" << otherType << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal of type\t" << this->_type << " destroyed." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != other) {
        this->_type = other.getType();
    }
    std::cout << "Animal of type\t" << this->_type << " created from\t" << otherType << std::endl;
    return *this;
}

std::string Animal::getType() {
    return this->_type;
}
void Animal::setType(std::string type) {
    this->_type = type;
}

void Animal::makeSound() {
    std::cout << "Animal noises..." << std::endl;
}

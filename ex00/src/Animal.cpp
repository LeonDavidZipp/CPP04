#include "../inc/Animal.hpp"

Animal::Animal() {
    this->_type = "Animal";
    std::cout << "Animal of type\t" << this->_type << " created" << std::endl;
}

Animal::Animal(const Animal& other) {
    std::string otherType = other.getType();
    this->_type = otherType;
    std::cout << "Animal of type\t" << this->_type << " created from\t" << otherType << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal of type\t" << this->_type << " destroyed." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    std::string otherType = other.getType();

    if (this != &other) {
        this->_type = otherType;
    }

    std::cout << "Animal of type\t" << this->_type << " created from\t" << otherType << std::endl;
    return *this;
}

std::string Animal::getType() const {
    return this->_type;
}

void Animal::setType(std::string type) {
    this->_type = type;
}

void Animal::makeSound() const {
    std::cout << "Animal noises..." << std::endl;
}

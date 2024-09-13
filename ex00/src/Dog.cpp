#include "../inc/Dog.hpp"

Dog::Dog() : Animal() {
    this->_type = "Dog";
    std::cout << "Dog of type\t" << this->_type << " created" << std::endl;
}

Dog::Dog(const Dog& other) : Animal() {
    std::string otherType = other.getType();
    std::cout << "Dog of type\t" << this->_type << " created from\t" << otherType << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog of type\t" << this->_type << " destroyed." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::string otherType = other.getType();
    if (this != &other) {
        this->_type = otherType;
    }
    std::cout << "Dog of type\t" << this->_type << " created from\t" << otherType << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Dog noises..." << std::endl;
}

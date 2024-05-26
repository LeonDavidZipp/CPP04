#include "../inc/Dog.hpp"

Dog::Dog() : Animal() {
    this->_type = "Default Dog";
    std::cout << "Dog of type\t" << this->_type << " created" << std::endl;
}
Dog::Dog(const std::string& type) : Animal(type) {
    this->_type = type;
    std::cout << "Dog of type\t" << this->_type << " created" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::string otherType = other.getType()
    this->_type = otherType;
    std::cout << "Dog of type\t" << this->_type << " created from\t" << otherType << std::endl;
}

Dog::~Dog() : ~Animal() {
    std::cout << "Dog of type\t" << this->_type << " destroyed." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != other) {
        this->_type = other.getType();
    }
    std::cout << "Dog of type\t" << this->_type << " created from\t" << otherType << std::endl;
    return *this;
}

void Dog::makeSound() {
    std::cout << "Dog noises..." << std::endl;
}
#include "../inc/Cat.hpp"

Cat::Cat() : Animal() {
    setType("Cat");
    std::cout << "Cat of type\t" << this->_type << " created" << std::endl;
}

Cat::Cat(const Cat& other) : Animal() {
    std::string otherType = other.getType();
	setType(otherType);
    std::cout << "Cat of type\t" << this->_type << " created from\t" << otherType << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat of type\t" << this->_type << " destroyed." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::string otherType = other.getType();
    if (this != &other) {
        this->_type = otherType;
    }
    std::cout << "Cat of type\t" << this->_type << " created from\t" << otherType << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Cat noises..." << std::endl;
}

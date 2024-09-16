#include "../inc/Dog.hpp"

Dog::Dog() : Animal() {
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog of type\t" << this->_type << " created" << std::endl;
}

Dog::Dog(const std::string& type, Brain* brain) : Animal(type) {
    this->_type = type;
    this->_brain = brain;
    std::cout << "Dog of type\t" << this->_type << " created" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::string otherType = other.getType();
    this->_type = otherType;
    this->_brain = new Brain(*other._brain);
    std::cout << "Dog of type\t" << this->_type << " created from\t" << otherType << std::endl;
}

Dog::~Dog() {
    delete this->_brain;
    std::cout << "Dog of type\t" << this->_type << " destroyed." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::string otherType = other.getType();
    if (this != &other) {
        this->_type = otherType;
        this->_brain = new Brain(*other._brain);
    }
    std::cout << "Dog of type\t" << this->_type << " created from\t" << otherType << std::endl;
    return *this;
}

std::string Dog::getType() const {
    return this->_type;
}

Brain* Dog::getBrain() const {
    return this->_brain;
}

void Dog::setType(std::string type) {
    this->_type = type;
}

void Dog::makeSound() const {
    std::cout << "Dog noises..." << std::endl;
}

void Dog::compareTo(const Dog& other) const
{
	std::cout << "Now comparing two dogs\n";
    std::cout << "My heap address:\t\t" << this << std::endl;
    std::cout << "Other heap address:\t\t" << &other << std::endl;
	std::cout << "My brain's heap address:\t" << static_cast<void*>(this->getBrain()) << std::endl;
	std::cout << "Other brain's heap address:\t" << static_cast<void*>(other.getBrain()) << std::endl;
}

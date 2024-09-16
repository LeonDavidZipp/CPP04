#include "../inc/Cat.hpp"

Cat::Cat() : AAnimal() {
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat of type\t" << this->_type << " created" << std::endl;
}

Cat::Cat(const std::string& type, Brain* brain) : AAnimal(type) {
    this->_type = type;
    this->_brain = brain;
    std::cout << "Cat of type\t" << this->_type << " created" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other) {
    std::string otherType = other.getType();
    this->_type = otherType;
    this->_brain = new Brain(*other._brain);
    std::cout << "Cat of type\t" << this->_type << " created from\t" << otherType << std::endl;
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "Cat of type\t" << this->_type << " destroyed." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::string otherType = other.getType();
    if (this != &other) {
        this->_type = otherType;
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    std::cout << "Cat of type\t" << this->_type << " created from\t" << otherType << std::endl;
    return *this;
}

std::string Cat::getType() const {
    return this->_type;
}

Brain* Cat::getBrain() const {
    return this->_brain;
}

void Cat::setType(std::string type) {
    this->_type = type;
}

void Cat::makeSound() const {
    std::cout << "Cat noises..." << std::endl;
}

void Cat::compareTo(const Cat& other) const
{
	std::cout << "Now comparing two cats\n";
    std::cout << "My heap address:\t\t" << this << std::endl;
    std::cout << "Other heap address:\t\t" << &other << std::endl;
	std::cout << "My brain's heap address:\t" << static_cast<void*>(this->getBrain()) << std::endl;
	std::cout << "Other brain's heap address:\t" << static_cast<void*>(other.getBrain()) << std::endl;
}

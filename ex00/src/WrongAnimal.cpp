#include "../inc/WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal() {
    this->_type = "Default WrongAAnimal";
    std::cout << "WrongAAnimal of type\t" << this->_type << " created" << std::endl;
}

WrongAAnimal::WrongAAnimal(const WrongAAnimal& other) {
    std::string otherType = other.getType();
    this->_type = otherType;
    std::cout << "WrongAAnimal of type\t" << this->_type << " created from\t" << otherType << std::endl;
}

WrongAAnimal::~WrongAAnimal() {
    std::cout << "WrongAAnimal of type\t" << this->_type << " destroyed." << std::endl;
}

WrongAAnimal& WrongAAnimal::operator=(const WrongAAnimal& other) {
    std::string otherType = other.getType();

    if (this != &other) {
        this->_type = otherType;
    }

    std::cout << "WrongAAnimal of type\t" << this->_type << " created from\t" << otherType << std::endl;
    return *this;
}

std::string WrongAAnimal::getType() const {
    return this->_type;
}

void WrongAAnimal::setType(std::string type) {
    this->_type = type;
}

void WrongAAnimal::makeSound() const {
    std::cout << "WrongAAnimal noises..." << std::endl;
}

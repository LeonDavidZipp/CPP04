#include "../inc/AAnimal.hpp"

AAnimal::AAnimal() {
    this->_type = "Default AAnimal";
    std::cout << "AAnimal of type\t" << this->_type << " created" << std::endl;
}

AAnimal::AAnimal(const std::string& type) {
    this->_type = type;
    std::cout << "AAnimal of type\t" << this->_type << " created" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
    std::string otherType = other.getType();
    this->_type = otherType;
    std::cout << "AAnimal of type\t" << this->_type << " created from\t" << otherType << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal of type\t" << this->_type << " destroyed." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
    std::string otherType = other.getType();

    if (this != &other) {
        this->_type = otherType;
    }

    std::cout << "AAnimal of type\t" << this->_type << " created from\t" << otherType << std::endl;
    return *this;
}

std::string AAnimal::getType() const {
    return this->_type;
}

void AAnimal::setType(std::string type) {
    this->_type = type;
}

void AAnimal::makeSound() const {
    std::cout << "AAnimal noises..." << std::endl;
}

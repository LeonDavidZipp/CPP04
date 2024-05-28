#include "../inc/Wrong.hpp"

WrongAnimal::WrongAnimal() {
    this->_type = "Default WrongAnimal";
    std::cout << "WrongAnimal of type\t" << this->_type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) {
    this->_type = type;
    std::cout << "WrongAnimal of type\t" << this->_type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    std::string otherType = other.getType();
    this->_type = otherType;
    std::cout << "WrongAnimal of type\t" << this->_type << " created from\t" << otherType << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal of type\t" << this->_type << " destroyed." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    std::string otherType = other.getType();

    if (this != &other) {
        this->_type = otherType;
    }

    std::cout << "WrongAnimal of type\t" << this->_type << " created from\t" << otherType << std::endl;
    return *this;
}

std::string WrongAnimal::getType() const {
    return this->_type;
}

void WrongAnimal::setType(std::string type) {
    this->_type = type;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal noises..." << std::endl;
}


WrongCat::WrongCat() : WrongAnimal() {
    this->_type = "Default WrongCat";
    std::cout << "WrongCat of type\t" << this->_type << " created" << std::endl;
}

WrongCat::WrongCat(const std::string& type) : WrongAnimal(type) {
    this->_type = type;
    std::cout << "WrongCat of type\t" << this->_type << " created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::string otherType = other.getType();
    this->_type = otherType;
    std::cout << "WrongCat of type\t" << this->_type << " created from\t" << otherType << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat of type\t" << this->_type << " destroyed." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::string otherType = other.getType();
    if (this != &other) {
        this->_type = otherType;
    }
    std::cout << "WrongCat of type\t" << this->_type << " created from\t" << otherType << std::endl;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat noises..." << std::endl;
}

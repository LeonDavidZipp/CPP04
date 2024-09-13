#include "../inc/WrongCat.hpp"

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

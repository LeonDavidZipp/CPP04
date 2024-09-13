#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAAnimal() {
    this->_type = "WrongCat";
    std::cout << "WrongCat of type\t" << this->_type << " created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAAnimal() {
    std::string otherType = other.getType();
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

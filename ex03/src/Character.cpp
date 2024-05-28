#include "../inc/Character.hpp"

Character::Character() {
    this->_type = "Default Character";
    std::cout << "Character of type\t" << this->_type << " created" << std::endl;
}

Character::Character(const std::string& type) {
    this->_type = type;
    std::cout << "Character of type\t" << this->_type << " created" << std::endl;
}

Character::Character(const Character& other) {
    std::string otherType = other.getType();
    this->_type = otherType;
    std::cout << "Character of type\t" << this->_type << " created from\t" << otherType << std::endl;
}

Character::~Character() {
    std::cout << "Character of type\t" << this->_type << " destroyed." << std::endl;
}

Character& Character::operator=(const Character& other) {
    std::string otherType = other.getType();

    if (this != &other) {
        this->_type = otherType;
    }

    std::cout << "Character of type\t" << this->_type << " created from\t" << otherType << std::endl;
    return *this;
}

const std::string& Character::getName() const {
    return this->_name;
}
const AMateria* Character::getEquipped() const {
    return this->_equipped
}
void Character::setName(std::string name) {
    this->name = name;
}
void Character::equip(AMateria* m) {

}
void Character::unequip(int idx) {

}
void Character::use(int idx, Character& target) {

}

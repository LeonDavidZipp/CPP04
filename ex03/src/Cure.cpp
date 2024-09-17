#include "../inc/Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure created" << std::endl;
}

Cure::Cure(Cure const & other) : AMateria(other) {
	std::cout << "Cure created from\t" << other.getType() << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destroyed" << std::endl;
}

Cure & Cure::operator=(Cure const & other) {
	if (this != &other) {
		AMateria::operator=(other);
	}

	std::cout << "Cure created (assignment) from\t" << other.getType() << std::endl;
	return *this;
}

AMateria* Cure::clone() const {
	std::cout << "Cure cloned" << std::endl;
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}


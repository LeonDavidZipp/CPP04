#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice created" << std::endl;
}

Ice::Ice(Ice const & other) : AMateria(other) {
	std::cout << "Ice created from\t" << other.getType() << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destroyed" << std::endl;
}

Ice & Ice::operator=(Ice const & other) {
	if (this != &other) {
		AMateria::operator=(other);
	}

	std::cout << "Ice created (assignment) from\t" << other.getType() << std::endl;
	return *this;
}

AMateria* Ice::clone() const {
	std::cout << "Ice cloned" << std::endl;
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


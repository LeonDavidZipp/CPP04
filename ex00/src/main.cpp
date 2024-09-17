#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete meta;
	delete cat;
	delete dog;
	delete wrongAnimal;
	delete wrongCat;

	return 0;
}

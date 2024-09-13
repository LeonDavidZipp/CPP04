#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main() {
	std::cout << "default constructors pointer -------------------------------" << std::endl;
    const Animal* meta = new Animal();
    const Dog* dog = new Dog();
    const Cat* cat = new Cat();

	std::cout << meta->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;

    meta->makeSound();
    cat->makeSound();
    dog->makeSound();

    delete meta;
    delete dog;
    delete cat;

	std::cout << std::endl;
	std::cout << "default constructors -------------------------------" << std::endl;

	const Animal meta1 = Animal();
    const Dog dog1 = Dog();
    const Cat cat1 = Cat();

	std::cout << "type: " << meta1.getType() << " " << std::endl;
    std::cout << "type: " << dog1.getType() << " " << std::endl;
    std::cout << "type: " << cat1.getType() << " " << std::endl;

    meta1.makeSound();
    cat1.makeSound();
    dog1.makeSound();

	std::cout << std::endl;
	std::cout << "parametric constructors pointer -------------------------------" << std::endl;
	const Animal* meta2 = new Animal("meta2");
	const Dog* dog2 = new Dog("dog2");
	const Cat* cat2 = new Cat("cat2");

	std::cout << "type: " << meta2->getType() << " " << std::endl;
	std::cout << "type: " << dog2->getType() << " " << std::endl;
	std::cout << "type: " << cat2->getType() << " " << std::endl;

	meta2->makeSound();
	cat2->makeSound();
	dog2->makeSound();

	delete meta2;
	delete dog2;
	delete cat2;

	std::cout << std::endl;
	std::cout << "parametric constructors -------------------------------" << std::endl;
	const Animal meta3 = Animal("meta3");
	const Dog dog3 = Dog("dog3");
	const Cat cat3 = Cat("cat3");

	std::cout << "type: " << meta3.getType() << " " << std::endl;
	std::cout << "type: " << dog3.getType() << " " << std::endl;
	std::cout << "type: " << cat3.getType() << " " << std::endl;

	meta3.makeSound();
	cat3.makeSound();
	dog3.makeSound();

	std::cout << std::endl;
	std::cout << "copy constructors -------------------------------" << std::endl;
	const Animal meta4 = meta3;
	const Dog dog4 = dog3;
	const Cat cat4 = cat3;

	std::cout << "type: " << dog4.getType() << " " << std::endl;
	std::cout << "type: " << dog4.getType() << " " << std::endl;
	std::cout << "type: " << cat4.getType() << " " << std::endl;

	meta4.makeSound();
	cat4.makeSound();

	std::cout << std::endl;
	std::cout << "assignment operators -------------------------------" << std::endl;
	const Animal meta5 = meta3;
	const Dog dog5 = dog3;
	const Cat cat5 = cat3;

	std::cout << "type: " << dog5.getType() << " " << std::endl;
	std::cout << "type: " << dog5.getType() << " " << std::endl;
	std::cout << "type: " << cat5.getType() << " " << std::endl;

	meta5.makeSound();
	cat5.makeSound();

	std::cout << std::endl;

    return 0;
}

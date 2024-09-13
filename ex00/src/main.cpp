#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

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

    std::cout << "copy constructors -------------------------------" << std::endl;
    const Animal meta2 = meta1;
    const Dog dog2 = dog1;
    const Cat cat2 = cat1;

    std::cout << "type: " << dog2.getType() << " " << std::endl;
    std::cout << "type: " << dog2.getType() << " " << std::endl;
    std::cout << "type: " << cat2.getType() << " " << std::endl;

    meta2.makeSound();
    cat2.makeSound();

    std::cout << std::endl;
    std::cout << "assignment operators -------------------------------" << std::endl;
    const Animal meta3 = meta1;
    const Animal dog3 = dog1;
    const Animal cat3 = cat1;

    std::cout << "type: " << dog3.getType() << " " << std::endl;
    std::cout << "type: " << dog3.getType() << " " << std::endl;
    std::cout << "type: " << cat3.getType() << " " << std::endl;

    meta3.makeSound();
    cat3.makeSound();

    std::cout << std::endl;

    std::cout << "wrong animals below ---------------------------------" << std::endl;

    std::cout << "default constructors pointer -------------------------------" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongCat* wrongCat = new WrongCat();

    std::cout << wrongMeta->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;

    wrongMeta->makeSound();
    wrongCat->makeSound();

    delete wrongMeta;
    delete wrongCat;

    std::cout << std::endl;
    std::cout << "default constructors -------------------------------" << std::endl;

    const WrongAnimal wrongMeta1 = WrongAnimal();
    const WrongAnimal wrongCat1 = WrongCat();

    std::cout << "type: " << wrongMeta1.getType() << " " << std::endl;
    std::cout << "type: " << wrongCat1.getType() << " " << std::endl;

    wrongMeta1.makeSound();
    wrongCat1.makeSound();

    std::cout << std::endl;

    std::cout << "copy constructors -------------------------------" << std::endl;
    const WrongAnimal wrongMeta2 = wrongMeta1;
    const WrongAnimal wrongCat2 = wrongCat1;

    std::cout << "type: " << wrongCat2.getType() << " " << std::endl;

    wrongMeta2.makeSound();
    wrongCat2.makeSound();

    std::cout << std::endl;
    std::cout << "assignment operators -------------------------------" << std::endl;
    const WrongAnimal wrongMeta3 = wrongMeta1;
    const WrongAnimal wrongCat3 = wrongCat1;

    std::cout << "type: " << wrongCat3.getType() << " " << std::endl;

    wrongMeta3.makeSound();
    wrongCat3.makeSound();

    std::cout << std::endl;

	const WrongAnimal wrongMeta4 = wrongMeta1;
    const WrongAnimal wrongCat4 = wrongCat1;

    std::cout << "type: " << wrongCat3.getType() << " " << std::endl;

    wrongMeta4.makeSound();
    wrongCat4.makeSound();

    return 0;
}

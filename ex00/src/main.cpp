#include "../inc/AAnimal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main() {
    std::cout << "default constructors pointer -------------------------------" << std::endl;
    const AAnimal* meta = new AAnimal();
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

    const AAnimal meta1 = AAnimal();
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
    const AAnimal meta2 = meta1;
    const Dog dog2 = dog1;
    const Cat cat2 = cat1;

    std::cout << "type: " << dog2.getType() << " " << std::endl;
    std::cout << "type: " << dog2.getType() << " " << std::endl;
    std::cout << "type: " << cat2.getType() << " " << std::endl;

    meta2.makeSound();
    cat2.makeSound();

    std::cout << std::endl;
    std::cout << "assignment operators -------------------------------" << std::endl;
    const AAnimal meta3 = meta1;
    const AAnimal dog3 = dog1;
    const AAnimal cat3 = cat1;

    std::cout << "type: " << dog3.getType() << " " << std::endl;
    std::cout << "type: " << dog3.getType() << " " << std::endl;
    std::cout << "type: " << cat3.getType() << " " << std::endl;

    meta3.makeSound();
    cat3.makeSound();

    std::cout << std::endl;

    std::cout << "wrong animals below ---------------------------------" << std::endl;

    std::cout << "default constructors pointer -------------------------------" << std::endl;
    const WrongAAnimal* wrongMeta = new WrongAAnimal();
    const WrongCat* wrongCat = new WrongCat();

    std::cout << wrongMeta->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;

    wrongMeta->makeSound();
    wrongCat->makeSound();

    delete wrongMeta;
    delete wrongCat;

    std::cout << std::endl;
    std::cout << "default constructors -------------------------------" << std::endl;

    const WrongAAnimal wrongMeta1 = WrongAAnimal();
    const WrongAAnimal wrongCat1 = WrongCat();

    std::cout << "type: " << wrongMeta1.getType() << " " << std::endl;
    std::cout << "type: " << wrongCat1.getType() << " " << std::endl;

    wrongMeta1.makeSound();
    wrongCat1.makeSound();

    std::cout << std::endl;

    std::cout << "copy constructors -------------------------------" << std::endl;
    const WrongAAnimal wrongMeta2 = wrongMeta1;
    const WrongAAnimal wrongCat2 = wrongCat1;

    std::cout << "type: " << wrongCat2.getType() << " " << std::endl;

    wrongMeta2.makeSound();
    wrongCat2.makeSound();

    std::cout << std::endl;
    std::cout << "assignment operators -------------------------------" << std::endl;
    const WrongAAnimal wrongMeta3 = wrongMeta1;
    const WrongAAnimal wrongCat3 = wrongCat1;

    std::cout << "type: " << wrongCat3.getType() << " " << std::endl;

    wrongMeta3.makeSound();
    wrongCat3.makeSound();

    std::cout << std::endl;

	const WrongAAnimal wrongMeta4 = wrongMeta1;
    const WrongAAnimal wrongCat4 = wrongCat1;

    std::cout << "type: " << wrongCat3.getType() << " " << std::endl;

    wrongMeta4.makeSound();
    wrongCat4.makeSound();

    return 0;
}

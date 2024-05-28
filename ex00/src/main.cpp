#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;

    meta->makeSound();
    cat->makeSound();
    dog->makeSound();

    delete meta;
    delete dog;
    delete cat;

    // Animal animal1;
    // Dog animal2("doggo");
    // Cat animal3("catto");

    // std::cout << animal2.getType() << " " << std::endl;
    // std::cout << animal3.getType() << " " << std::endl;

    // animal1.makeSound();
    // animal2.makeSound();
    // animal3.makeSound();

    return 0;
}

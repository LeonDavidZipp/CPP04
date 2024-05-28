#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Wrong.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;

    meta->makeSound();
    cat->makeSound();
    dog->makeSound();
    wrongCat->makeSound();

    delete meta;
    delete dog;
    delete cat;
    delete wrongCat;

    return 0;
}

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include <array>

int main() {
    // idea array
    std::array<std::string, 100> ideas;
    for (int i = 0; i < 100; i++) {
        ideas[i] = "Idea " + std::to_string(i);
    }

    // filling the array with animals
    const int len = 6;
    std::array<AAnimal*, len> animals;
    animals[0] = new Cat();
    animals[1] = new Cat("Persian", new Brain(ideas));
    animals[2] = new Cat(*(static_cast<Cat*>(animals[1])));
    animals[3] = new Dog();
    animals[4] = new Dog("Bulldog", new Brain(ideas));
    animals[5] = new Dog(*(static_cast<Dog*>(animals[4])));

    // testing the array
    for (int i = 0; i < len; i++) {
        std::cout << i << std::endl;
        std::cout << "Type:\t" << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
        std::cout <<"-------------------" << std::endl;
    }

    //testing deepcopies
    std::cout << std::endl;
	static_cast<Cat*>(animals[0])->compareTo(*(static_cast<Cat*>(animals[1])));
    static_cast<Cat*>(animals[1])->compareTo(*(static_cast<Cat*>(animals[2])));
    std::cout << "-------------------" << std::endl;
	static_cast<Dog*>(animals[3])->compareTo(*(static_cast<Dog*>(animals[4])));
    static_cast<Dog*>(animals[4])->compareTo(*(static_cast<Dog*>(animals[5])));
    std::cout << "-------------------" << std::endl;

    // deleting the array
    std::cout <<std::endl;
    for (int i = 0; i < len; i++) {
        std::cout << "deleting animal " << i << std::endl;
        delete animals[i];
        std::cout << "-------------------" << std::endl;
    }

    return 0;
}
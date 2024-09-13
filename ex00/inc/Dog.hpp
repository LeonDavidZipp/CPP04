#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include <iostream>

class Dog : public AAnimal {
    public:
        Dog();
        Dog(const Dog& other);
        ~Dog();

        Dog& operator=(const Dog& other);

        void makeSound() const override;
};

#endif

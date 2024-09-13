#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog : public Animal {
    public:
        Dog();
        Dog(const std::string& type);
        Dog(const Dog& other);
        ~Dog();

        Dog& operator=(const Dog& other);

        void makeSound() const override;

    protected:
        std::string _type;
};

#endif

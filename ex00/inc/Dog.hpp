#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog {
    public:
        Dog();
        Dog(const std::string& type);
        Dog(const Dog& other);
        ~Dog();

        Dog& operator=(const Dog& other);

        std::string getType();
        void setType(std::string type);

        void makeSound();

    protected:
        std::string _type;
};

#endif

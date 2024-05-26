#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
    public:
        Animal();
        Animal(const std::string& type);
        Animal(const Animal& other);
        ~Animal();

        Animal& operator=(const Animal& other);

        std::string getType();
        void setType(std::string type);

        void makeSound() const;

    protected:
        std::string _type;
};

#endif

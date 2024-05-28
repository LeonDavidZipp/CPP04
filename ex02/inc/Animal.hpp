#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
    public:
        Animal();
        Animal(const std::string& type);
        Animal(const Animal& other);
        virtual ~Animal();

        Animal& operator=(const Animal& other);

        virtual std::string getType() const;
        void setType(std::string type);

        virtual void makeSound() const = 0;

    protected:
        std::string _type;
};

#endif

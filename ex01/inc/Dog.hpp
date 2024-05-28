#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>
# include <array>

class Dog : public Animal {
    public:
        Dog();
        Dog(const std::string& type, const Brain* brain);
        Dog(const Dog& other);
        ~Dog();

        Dog& operator=(const Dog& other);

        Brain* getBrain() const;

        void makeSound() const;

    protected:
        std::string _type;

    private:
        Brain* _brain;
};

#endif

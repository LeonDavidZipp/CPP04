#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>
# include <array>

class Dog : public AAnimal {
    public:
        Dog();
        Dog(const std::string& type, Brain* brain);
        Dog(const Dog& other);
        ~Dog();

        Dog& operator=(const Dog& other);

        std::string getType() const;
        Brain* getBrain() const;

        void setType(std::string type);

        void makeSound() const;

        void compareTo(const Dog& other) const;

    protected:
        std::string _type;

    private:
        Brain* _brain;
};

#endif

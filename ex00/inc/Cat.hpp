#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat {
    public:
        Cat();
        Cat(const std::string& type);
        Cat(const Cat& other);
        ~Cat();

        Cat& operator=(const Cat& other);

        std::string getType();
        void setType(std::string type);

        void makeSound();

    protected:
        std::string _type;
};

#endif

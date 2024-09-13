#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal {
    public:
        Cat();
        Cat(const std::string& type);
        Cat(const Cat& other);
        ~Cat();

        Cat& operator=(const Cat& other);

        void makeSound() const override;

    protected:
        std::string _type;
};

#endif

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include <iostream>

class Cat : public AAnimal {
    public:
        Cat();
        Cat(const Cat& other);
        ~Cat();

        Cat& operator=(const Cat& other);

        void makeSound() const override;
};

#endif

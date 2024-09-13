#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat& other);
        ~WrongCat();

        WrongCat& operator=(const WrongCat& other);

        void makeSound() const;
};

#endif

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const std::string& type);
        WrongCat(const WrongCat& other);
        ~WrongCat();

        WrongCat& operator=(const WrongCat& other);

        void makeSound() const override;

    protected:
        std::string _type;
};

#endif

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>
# include <array>

class Cat : public AAnimal {
    public:
        Cat();
        Cat(const std::string& type, Brain* brain);
        Cat(const Cat& other);
        ~Cat();

        Cat& operator=(const Cat& other);

        std::string getType() const;
        Brain* getBrain() const;

        void setType(std::string type);

        void makeSound() const;

        void compareTo(const Cat& other) const;

    protected:
        std::string _type;

    private:
        Brain* _brain;
};

#endif

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAAnimal {
    public:
        WrongAAnimal();
        WrongAAnimal(const WrongAAnimal& other);
        ~WrongAAnimal();

        WrongAAnimal& operator=(const WrongAAnimal& other);

        std::string getType() const;
        void setType(std::string type);

        void makeSound() const;

    protected:
        std::string _type;
};

#endif

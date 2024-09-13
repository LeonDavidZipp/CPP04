#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>

class WrongAnimal {
    public:
        WrongAnimal();
        WrongAnimal(const std::string& type);
        WrongAnimal(const WrongAnimal& other);
        virtual ~WrongAnimal();

        WrongAnimal& operator=(const WrongAnimal& other);

        virtual std::string getType() const;
        void setType(std::string type);

        virtual void makeSound() const;

    protected:
        std::string _type;
};

#endif

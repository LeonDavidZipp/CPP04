#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal {
    public:
        AAnimal();
        AAnimal(const std::string& type);
        AAnimal(const AAnimal& other);
        virtual ~AAnimal();

        AAnimal& operator=(const AAnimal& other);

        virtual std::string getType() const;
        void setType(std::string type);

        virtual void makeSound() const;

    protected:
        std::string _type;
};

#endif

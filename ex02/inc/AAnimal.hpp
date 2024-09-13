#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal {
    public:
        virtual ~AAnimal();
        AAnimal& operator=(const AAnimal& other);

        virtual std::string getType() const;
        void setType(std::string type);

        virtual void makeSound() const = 0;

    protected:
        AAnimal();
        AAnimal(const std::string& type);
        AAnimal(const AAnimal& other);

		std::string _type;
};

#endif

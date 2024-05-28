#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : virtual public AMateria {
    public:
        Cure();
        Cure(const Cure& other);
        ~Cure();

        Cure& operator=(const Cure& other);

        std::string& getType() const;

        Cure* clone();
        void use(ICharacter& target);

    protected:
        std::string _type;
};

#endif
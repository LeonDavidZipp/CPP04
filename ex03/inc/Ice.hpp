#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice {
    public:
        Ice();
        Ice(const Ice& other);
        ~Ice();

        Ice& operator=(const Ice& other);

        std::string& getType() const;

        Ice* clone();
        void use(ICharacter& target);

    protected:
        std::string _type;
};

#endif
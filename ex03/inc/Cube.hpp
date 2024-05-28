#ifndef CUBE_HPP
# define CUBE_HPP

# include "AMateria.hpp"

class Cube {
    public:
        Cube();
        Cube(const Cube& other);
        ~Cube();

        Cube& operator=(const Cube& other);

        std::string& getType() const;

        Cube* clone();
        void use(ICharacter& target);

    protected:
        std::string _type;
};

#endif
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "IMateria.hpp"

class Character {
    public:
        Character();
        Chracter(const std::string name)
        Character& Character(const Character& other);
        ~Character() {}

        operator=(const Character& other);

        const std::string& getName() const;
        const AMateria* getEquipped() const;

        void setName(std::string name);

        void equip(AMateria* m) = 0;
        void unequip(int idx) = 0;
        void use(int idx, Character& target);
};

#endif
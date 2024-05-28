#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character : virtual public ICharacter {
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

    private:
        std::string _name
        std::array<AMateria*, 4> _weapons;
        AMateria* _equipped;
};

#endif
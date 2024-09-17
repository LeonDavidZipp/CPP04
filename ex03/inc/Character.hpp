#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <array>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(Character const & other);
		Character(std::string const & name);
		virtual ~Character();
		Character & operator=(Character const & other);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string _name;
		std::array<AMateria *, 4> _materias;
		std::array<AMateria *, 1000> _dropped;
};

#endif
#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const & other);
		virtual ~Ice();
		Ice & operator=(Ice const & other);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
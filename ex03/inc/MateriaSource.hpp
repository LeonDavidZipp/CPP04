#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include <iostream>

class IMateriaSource
{
    MateriaSource();
    MateriaSource(std::string type)
    MateriaSource(const MateriaSource& other);
    ~MateriaSource();

    MateriaSource& operator=(const MateriaSource& other)

    std::string getType() const;
    void setType(std::string type)

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif

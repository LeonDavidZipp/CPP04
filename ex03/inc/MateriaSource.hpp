#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

class IMateriaSource
{
    virtual ~MateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif

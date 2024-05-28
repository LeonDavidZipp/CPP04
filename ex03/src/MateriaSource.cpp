#include "../inc/MateriaSource"


MateriaSource();
MateriaSource(std::string type);
MateriaSource(const MateriaSource& other);
~MateriaSource();
MateriaSource& operator=(const MateriaSource& other);
std::string getType() const;
void setType(std::string type);
void learnMateria(AMateria*);
AMateria* createMateria(std::string const & type);

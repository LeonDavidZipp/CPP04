#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
		_learnedMateria[i] = 0;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (_learnedMateria[i])
			delete _learnedMateria[i];
		_learnedMateria[i] = other._learnedMateria[i]->clone();
	}
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (_learnedMateria[i])
			delete _learnedMateria[i];
		_learnedMateria[i] = other._learnedMateria[i]->clone();
	}
	std::cout << "MateriaSource assignment operator called" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_learnedMateria[i])
			delete _learnedMateria[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_learnedMateria[i])
		{
			_learnedMateria[i] = m->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_learnedMateria[i] && _learnedMateria[i]->getType() == type)
			return (_learnedMateria[i]->clone());
	}
	return (0);
}

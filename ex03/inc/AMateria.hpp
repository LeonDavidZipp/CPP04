#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria {
    public:
        AMateria();
        AMateria(const AMateria& other);
        virtual ~AMateria();

        AMateria& operator=(const AMateria& other);

        std::string& getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    protected:
        std::string _type;
};

#endif
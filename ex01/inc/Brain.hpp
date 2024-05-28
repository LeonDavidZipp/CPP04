#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <array>

class Brain {
    public:
        Brain();
        Brain(std::array<std::string, 100> ideas);
        Brain(const Brain &src);
        virtual ~Brain();

        Brain& operator=(const Brain &src);

        virtual std::array<std::string, 100> getIdeas() const;
        virtual std::string getIdea(int index) const;
        virtual void setIdeas(std::array<std::string, 100> ideas);
        virtual void setIdea(int index, std::string idea);

    private:
        std::array<std::string, 100> _ideas;
};

#endif
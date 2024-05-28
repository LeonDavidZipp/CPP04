#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <array>

class Brain {
    public:
        Brain();
        Brain(std::array<std::string, 100> ideas)
        Brain(const Brain &src);
        virtual ~Brain();
        virtual std:array<std::string> ideas() const;

    private:
        std::array<std::string, 100> _ideas;
};

#endif
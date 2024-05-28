#include "../inc/Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
    this->_ideas.fill("default idea");
}

Brain::Brain(std::array<std::string, 100> ideas) {
    std::cout << "Brain parameterized constructor called" << std::endl;
    this->_ideas = ideas;
}

Brain::Brain(const Brain &src) {
    std::cout << "Brain copy constructor called" << std::endl;
    this->_ideas = src._ideas;
}

Brain& Brain::operator=(const Brain &src) {
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &src) {
        this->_ideas = src._ideas;
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

std::array<std::string, 100> Brain::getIdeas() const {
    return this->_ideas;
}

std::string Brain::getIdea(int index) const {
    return this->_ideas[index];
}

void Brain::setIdeas(std::array<std::string, 100> ideas) {
    this->_ideas = ideas;
}

void Brain::setIdea(int index, std::string idea) {
    this->_ideas[index] = idea;
}

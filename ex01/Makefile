
NAME := ex01Test

CPP := c++
CPPFLAGS := -Wextra -Wall -Werror -std=c++11

SRCDIR := ./src
SOURCES := $(addprefix $(SRCDIR)/, main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp)
OBJDIR = ./obj
OBJECTS := $(addprefix $(OBJDIR)/, $(notdir $(SOURCES:.cpp=.o)))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CPP) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -rf $(OBJDIR)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(OBJDIR)
	$(CPP) $(CPPFLAGS) -c $< -o $@

.PHONY: all clean fclean re
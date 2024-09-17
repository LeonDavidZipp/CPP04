
NAME := ex03Test

CPP := c++
CPPFLAGS := -Wextra -Wall -Werror -std=c++11

SRCDIR := ./src
SOURCES := $(addprefix $(SRCDIR)/, main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp)
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

mkdir:
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | mkdir
	$(CPP) $(CPPFLAGS) -c $< -o $@

.PHONY: all clean fclean re
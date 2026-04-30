NAME     = AbstractClass
CXX      = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I.

SRCS_DIR = srcs/
OBJ_DIR  = .obj/

SRCS     = $(SRCS_DIR)main.cpp $(SRCS_DIR)Animal.cpp $(SRCS_DIR)Cat.cpp \
		  $(SRCS_DIR)Dog.cpp $(SRCS_DIR)WrongAnimal.cpp $(SRCS_DIR)WrongCat.cpp \
		  $(SRCS_DIR)Brain.cpp

OBJ     = $(SRCS:$(SRCS_DIR)%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o: $(SRCS_DIR)%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
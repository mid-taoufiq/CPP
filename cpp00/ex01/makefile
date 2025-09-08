NAME = phonebook
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp \
	contact.cpp \
	phonebook.cpp
	
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) contact.hpp phonebook.hpp
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

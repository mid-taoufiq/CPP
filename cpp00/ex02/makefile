NAME = Account
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = tests.cpp \
	Account.cpp \
	
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Account.hpp
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

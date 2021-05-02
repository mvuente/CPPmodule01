NAME = replace

SRC = main.cpp Fopener.cpp

OBJ = $(SRC:.cpp=.o)

H = Fopener.hpp

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(OBJ) -o $(NAME)

%.o: %.cpp $(H)
	clang++ -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
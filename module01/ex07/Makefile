NAME = replace
INCLUDES = ./includes
FLAGS = -Wall -Wextra -Werror
SRC =	main.cpp \
		replace.cpp \

OBJ = $(SRC:.cpp=.o)
$(NAME): $(OBJ)
	clang++ $(FLAGS) -g -I $(INCLUDES) $^ -o $(NAME)

%.o : %.cpp
	clang++ $(FLAGS) -g -I $(INCLUDES) -o $@ -c $<
all: $(NAME)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

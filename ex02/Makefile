CPP =c++
CFLAGS =  -Wall -Wextra -Werror -std=c++98
FILES = main.cpp Fixed.cpp
OBJ= $(FILES:.cpp=.o)
NAME= fixed

all :$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp Fixed.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all

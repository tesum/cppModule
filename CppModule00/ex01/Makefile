NAME	=	phonebook

SRCS	=	main.cpp PhoneBook.cpp

FLAGS	=	-Wall -Wextra -Werror -I.

OBJ		=	$(SRCS:.cpp=.o)

.PHONY : all clean fclean re

all : $(NAME)

%.o : %.cpp $(HEADER)
	clang++ -g $(FLAGS) -c $< -o $@

${NAME} : $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
NAME	=	test

SRCS	=	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp WrongDog.cpp 

HDRS	=	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp WrongDog.hpp

FLAGS	=	-Wall -Wextra -Werror -I.

OBJ		=	$(SRCS:.cpp=.o)

.PHONY : all clean fclean re

all : $(NAME)


%.o : %.cpp
	clang++ -g $(FLAGS) -c $< -o $@

${OBJ}	:	${HDRS}

${NAME} : $(OBJ) ${HDRS}
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
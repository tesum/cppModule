NAME	=	test

SRCS	=	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

HDRS	=	AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp

FLAGS	=	-Wall -Wextra -Werror -I. -std=c++98

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
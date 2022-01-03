NAME	=	test

SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

HDRS	=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

FLAGS	=	-Wall -Wextra -Werror -I. -std=c++98 -I. -Wshadow -Wno-shadow

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
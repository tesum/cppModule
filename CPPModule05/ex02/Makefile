NAME	=	test

SRCS	=	main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

HDRS	=	Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

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
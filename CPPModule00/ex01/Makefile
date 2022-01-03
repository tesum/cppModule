NAME	=	phonebook

SRCS	=	main.cpp Contact.cpp PhoneBook.cpp 

HDRS	=	Header.hpp Contact.hpp	PhoneBook.hpp

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
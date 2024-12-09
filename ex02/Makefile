NAME = Bureaucrat


SRCS_FILE = srcs/Bureaucrat.cpp srcs/main.cpp srcs/AForm.cpp srcs/PresidentialPardonForm.cpp srcs/RobotomyRequestForm.cpp srcs/ShrubberyCreationForm.cpp
HEADER_FILE = headers/Bureaucrat.hpp headers/From.hpp headers/PresidentialPardonForm.cpp headers/RobotomyRequestForm.cpp headers/ShrubberyCreationForm.cpp


CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98




OBJS = $(SRCS_FILE:.cpp=.o)


RM = rm -Rf

all: ${NAME}

${NAME}: ${OBJS}
	$(CC) $(OBJS) -o $(NAME)



%.o: %.cpp  Makefile ${HEADER_FILE}
	$(CC) ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) $(NAME)

re: fclean all



.PHONY: all clean fclean re 

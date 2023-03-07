
CC =  c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

		
SRCS = 	main.cpp\
		Contacts.cpp \
		PhoneBook.cpp 


OBJS = ${SRCS:.cpp=.o}

NAME = PhoneBook

REM = rm -rf

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all : ${NAME}
${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean :
	${REM} $(OBJS)

fclean : clean
	${REM} $(NAME)

re : fclean all
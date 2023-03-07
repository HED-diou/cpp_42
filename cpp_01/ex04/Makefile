
CC =  c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g 

		
SRCS = 	main.cpp \
		replace.cpp


OBJS = ${SRCS:.cpp=.o}

NAME = file

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
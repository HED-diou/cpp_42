CC =  c++

CFLAGS = -Wall -Wextra -Werror -std=c++98


SRCS = 	main.cpp \
		PmergeMe.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = PmergeMe

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
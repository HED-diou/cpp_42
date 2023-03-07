

CC =  c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

		
SRCS = 	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \


OBJS = ${SRCS:.cpp=.o}

NAME = zombie

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
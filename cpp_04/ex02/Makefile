
CC =  c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

		
SRCS = 	Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp \
		WrongCat.cpp \
		WrongAnimal.cpp \
		main.cpp

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
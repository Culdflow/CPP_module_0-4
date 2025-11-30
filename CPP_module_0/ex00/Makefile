CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
# -fsanitize=address
NAME = megaphone
CFILES = megaphone.cpp


OBJS = ${CFILES:.cpp=.o}

.cpp.o:
	${CC} ${CFLAGS} -Iminilibx -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	$(CC) ${CFLAGS} $(OBJS) -o $(NAME)

fclean:	clean
	rm -rf ${NAME}

clean:
	rm -rf ${OBJS}

re:	fclean all

.PHONY: all clean fclean re
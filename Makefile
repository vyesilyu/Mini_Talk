SRC = server.c client.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
printf= ft_printf/libftprintf.a
OBJS = $(SRC:.c=.o)
CLIENT = client
SERVER = server

all: ${SERVER} ${CLIENT}

${NAME}: ${SERVER} ${CLIENT}

${SERVER}:$(OBJS)
	@${MAKE} -C ./ft_printf
	@${CC} ${CFLAGS} server.c ${printf} -o server

$(CLIENT):$(OBJS)
	@${CC} ${CFLAGS} client.c ${printf} -o client

clean:
	@${MAKE} -C ./ft_printf clean
	rm -fr $(OBJS)
fclean: clean
	rm -rf server client
	@${MAKE} -C ./ft_printf fclean
re: fclean all

.PHONY: all clean fclean re
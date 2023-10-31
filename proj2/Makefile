SRCS	= $(wildcard ./ft_*.c)
OBJS	= $(SRCS:.c=.o)
CFLAGS	= -Wall -Wextra -Werror
NAME	= libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
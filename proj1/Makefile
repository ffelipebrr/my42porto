SRCS	= $(filter-out $(wildcard *_bonus.c), $(wildcard *.c))
BONUS_SRCS	= $(wildcard *_bonus.c)
BONUS_OBJS	= $(BONUS_SRCS:.c=.o)
OBJS	= $(SRCS:.c=.o)
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
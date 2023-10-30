NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -fr
FILES = *.c
OBJS = *.o
MAIN = main.c

all: fclean $(NAME) clean

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	
$(OBJS): $(FILES)
	@$(CC) $(CFLAGS) -c $(FILES)

clean:
	@$(RM) $(OBJS)

fclean:
	@$(RM) $(OBJS) $(NAME)

re: fclean all
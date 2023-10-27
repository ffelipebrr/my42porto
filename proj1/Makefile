# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 09:12:44 by codespace         #+#    #+#              #
#    Updated: 2023/10/27 09:18:27 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -fr
FILES = $(filter-out $(wildcard *_bonus.c), $(wildcard *.c))
OBJS = *.o
BONUS_FILES = *_bonus.c
BONUS_OBJS = *_bonus.o

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

$(BONUS_OBJS): $(BONUS_FILES)
	$(CC) $(CFLAGS) -c $(BONUS_FILES)

clean:
	$(RM) $(OBJS) 

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all

bonus: $(BONUS_OBJS) $(OBJS)
	$(AR) $(NAME) $(OBJS)
	
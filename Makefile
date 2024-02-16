# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 02:41:00 by ezahiri           #+#    #+#              #
#    Updated: 2024/02/15 23:15:57 by ezahiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 CC = cc #-g -fsanitize=address
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRCS = main.c ft_sorted_3.c ft_sorted_2.c sorted.c ft_sort_a.c is_sorted.c sorted_5.c \
       parsing/parsing.c parsing/is_duplicate.c \
		util/ft_atoi.c \
		util/ft_isdigit.c \
		 util/ft_split.c \
		 util/ft_strlcpy.c \
		 util/ft_strjoin.c\
		  util/ft_lstnew.c \
		  util/ft_lstadd_front.c \
		  util/ft_lstsize.c \
		  util/ft_lstlast.c \
		  util/ft_lstadd_back.c \
		  util/ft_lstdelone.c \
		  util/ft_lstclear.c \
		  util/ft_lst_beforelast.c \
	   opertion/indexing.c opertion/ft_swap.c opertion/ft_push.c opertion/ft_rotate.c  opertion/ft_exit.c opertion/ft_reverse_rotate.c opertion/ft_stack_new.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c push_swap.h
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
clean:
	@rm -f $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
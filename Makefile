# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 02:41:00 by ezahiri           #+#    #+#              #
#    Updated: 2024/02/17 23:46:15 by ezahiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 CC = cc #-g -fsanitize=address
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRCS = main.c a_to_b.c sorted_2.c sorted_3.c sorted.c ft_sort_a.c is_sorted.c sorted_5.c \
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
	   	opertion/push_a.c \
	   	opertion/push_b.c \
	   	opertion/ft_swap_a.c \
	   	opertion/ft_swap_b.c \
		opertion/rotate_a.c \
		opertion/rotate_b.c \
		opertion/rotate_a_b.c \
		opertion/rev_rotate_a.c \
		opertion/rev_rotate_b.c \
		opertion/rev_rotate_a_b.c \
		opertion/ft_stack_new.c \
		 opertion/ft_exit.c \

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
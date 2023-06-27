# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sun-wkim <sun-wkim@student.42lausanne      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 14:39:39 by sun-wkim          #+#    #+#              #
#    Updated: 2023/06/27 14:42:29 by sun-wkim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 	= ft_putendl_fd.c ft_split.c ft_isdigit.c ft_atoi.c check_arg.c free.c get_max_min_value.c handle_under_three.c init_stack.c main.c push_swap.c push.c reverse_rotate_stack.c rotate.c sort_a_to_b.c sort_arg_five.c sort_arg_three_a.c sort_arg_three_b.c sort_b_to_a.c swap.c ft_strlen.c

NAME = push_swap

OBJ		=	$(SRC:.c=.o)

flags	=	-Wall -Wextra -Werror

%.o: %.c
			@gcc -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJ)
			@gcc $(flags) $(SRC) -o $(NAME)

clean:
			@rm -rf $(OBJ)

fclean: clean
			@rm -rf $(NAME)

re: fclean all

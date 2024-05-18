# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/27 19:01:49 by mdoudi-b          #+#    #+#              #
#    Updated: 2024/05/10 17:29:31 by mdoudi-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT_DIR = Libft/

CFLAGS = -Wextra -Wall -Werror -g

SRC_DIR = src/

SRC_FILES = src/input_errors.c src/ft_aux.c src/main.c \
			src/stack.c src/mov_swap.c \
			src/input.c src/mov_rotate.c src/mov_reverse_rotate.c \
			src/mov_push.c src/assistant.c src/sort_numbers.c \
			src/radix.c src/find_num.c src/index.c \

OBJ = $(SRC_FILES:.c=.o)

MAKEFLAGS += -s

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) all -C $(LIBFT_DIR)
	gcc $(CFLAGS) $(OBJ) -L$(LIBFT_DIR) -lft -o $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@
			
clean:
	@rm -rf $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean

	@rm -rf $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean


re: fclean all

.PHONY: all clean fclean re
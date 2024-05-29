# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 17:19:09 by pavicent          #+#    #+#              #
#    Updated: 2024/05/13 17:19:12 by pavicent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= so_long
LIBFTNAME	= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror $(HEADER) -fsanitize=address,leak
HEADERS		= -I ./headers

SRC			=	map_check/so_long.c\
				map_check/init_map.c\
				map_check/check_name.c\
				map_check/number_lines.c\
				map_check/fill_map.c\
				map_check/so_error.c\
				map_check/check_w.c\
				map_check/free_map.c\
				map_check/map_len.c\
				map_check/so_end.c\
				map_check/check_content.c\
				map_check/copy_map.c\
				map_check/check_chars.c\
				map_check/free_aux.c\
				map_check/check_u_n_d.c\
				map_check/check_lr.c\
				map_check/check_limits.c\
				map_check/pos_player.c\

OBJ			= 	$(SRC:.c=.o)

PATHLIBFT	= -L libft -lft

all: $(NAME)

$(NAME): $(OBJ)
	cd libft && $(MAKE)
	$(CC) $(CFLAGS) $(OBJ) $(PATHLIBFT) -g -o $(NAME)

clean:
	cd libft && $(MAKE) clean
	rm -f $(OBJ)

fclean: clean
	cd libft && $(MAKE) fclean
	rm -f $(NAME)

re: fclean all

.PHONY:	fclean all clean all bonus

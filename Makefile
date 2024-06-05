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

NAME        = so_long
CC          = gcc
CFLAGS      = -Wextra -Werror -Wall -g3 -fsanitize=address -I$(INC) -I$(LIBFT_DIR)inc/ -I$(MLX_DIR)
LDFLAGS     = -L$(LIBFT_DIR) -lft -L$(MLX_DIR) $(MLX) $(MLX_LINUX) -lX11 -lXext -lm -lbsd

INC         = inc/
map        = assets/maps

LIBFT_DIR   = libft/
LIBFT       = $(LIBFT_DIR)libft.a

MLX_DIR     = mlx_linux/
MLX         = $(MLX_DIR)libmlx.a
MLX_LINUX   = $(MLX_DIR)libmlx_Linux.a

SRCS_DIR    = srcs/
OBJS_DIR    = objs/
SRCS_FILES	= so_long.c init_map.c check_name.c \
			number_lines.c fill_map.c so_error.c\
			check_w.c free_map.c map_len.c so_end.c \
			check_content.c copy_map.c check_chars.c\
			free_aux.c check_u_n_d.c check_lr.c\
			check_limits.c pos_player.c parsing.c\
			is_valid.c\

OBJS_FILES  = $(SRCS_FILES:.c=.o)

SRCS        = $(addprefix $(SRCS_DIR), $(SRCS_FILES))
OBJS        = $(addprefix $(OBJS_DIR), $(OBJS_FILES))

all: $(NAME)

$(NAME): $(LIBFT) $(MLX) $(OBJS)
	@echo "\nCompiling $(BLUE)$(NAME)$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)
	@echo "\n$(GREEN)$(NAME) compiled!$(DEF_COLOR)"
	@echo "$(BOLD_CYAN)\n------------\n| Done! 👌 |\n------------$(DEF_COLOR)"

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@[ -d $(OBJS_DIR) ] || mkdir -p $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@echo "\nCompiling $(BLUE)libft$(DEF_COLOR)"
	@make -sC $(LIBFT_DIR)

$(MLX):
	@echo "\nCompiling $(BLUE)mlx$(DEF_COLOR)"
	@make -sC $(MLX_DIR)

clean:
	rm -rf $(OBJS_DIR)
	make fclean -sC $(LIBFT_DIR)
	make clean -sC $(MLX_DIR)

fclean: clean
	rm -rf $(NAME)
	@echo "$(GREEN)$(NAME)$(YELLOW) cleaned$(DEF_COLOR)"

re: fclean all

.PHONY: all clean fclean re
.SILENT: all clean fclean
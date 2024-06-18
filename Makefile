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
CFLAGS      = -Wextra -Werror -Wall -I$(INC) -I$(LIBFT_DIR)inc/ -I$(MLX_DIR) -I$(PRINTF_DIR)inc/
#-g3 -fsanitize=address 
LDFLAGS     = -L$(LIBFT_DIR) -lft -L$(MLX_DIR) $(MLX) $(MLX_LINUX) -lX11 -lXext -lm -lbsd -L$(PRINTF_DIR) $(PRINTF) -lftprintf

INC         = inc/
map        	= assets/maps

LIBFT_DIR   = libft/
LIBFT       = $(LIBFT_DIR)libft.a

MLX_DIR     = mlx_linux/
MLX         = $(MLX_DIR)libmlx.a
MLX_LINUX   = $(MLX_DIR)libmlx_Linux.a

PRINTF_DIR	= ft_printf/
PRINTF		= $(PRINTF_DIR)libftprintf.a

SRCS_DIR    = srcs/
OBJS_DIR    = objs/
SRCS_FILES	= so_long.c init_map.c check_name.c \
			number_lines.c fill_map.c so_error.c\
			check_w.c free_map.c map_len.c so_end.c \
			check_content.c copy_map.c check_chars.c\
			free_aux.c check_u_n_d.c check_lr.c\
			check_limits.c pos_player.c parsing.c\
			is_valid.c init_game.c init_img.c find_exit.c\
			init_background.c hooks.c destroy_all.c\
			player_move.c\

BONUS_DIR    = srcs_bonus/
OBJS_BONUS_DIR    = objs_bonus/
BONUS_FILES	= so_long.c init_map.c check_name.c \
			number_lines.c fill_map.c so_error.c\
			check_w.c free_map.c map_len.c so_end.c \
			check_content.c copy_map.c check_chars.c\
			free_aux.c check_u_n_d.c check_lr.c\
			check_limits.c pos_player.c parsing.c\
			is_valid.c init_game.c init_img.c find_exit.c\
			init_background.c hooks.c destroy_all.c\
			player_move.c init_player.c init_enemy.c\
			init_exit.c animations.c\

OBJS_FILES  = $(SRCS_FILES:.c=.o)

OBJS_BONUS_FILES  = $(BONUS_FILES:.c=.o)

SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_FILES))
OBJS		= $(addprefix $(OBJS_DIR), $(OBJS_FILES))

SRCS_BONUS	= $(addprefix $(BONUS_DIR), $(BONUS_FILES))
OBJS_BONUS	= $(addprefix $(OBJS_BONUS_DIR), $(OBJS_BONUS_FILES))

all: $(NAME)

$(NAME): $(LIBFT) $(MLX) $(PRINTF) $(OBJS) 
	@echo "\nCompiling $(BLUE)$(NAME)$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)
	@echo "\n$(GREEN)$(NAME) compiled!$(DEF_COLOR)"
	@echo "$(BOLD_CYAN)\n------------\n| Done! 👌 |\n------------$(DEF_COLOR)"

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@[ -d $(OBJS_DIR) ] || mkdir -p $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_BONUS_DIR)%.o: $(BONUS_DIR)%.c
	@[ -d $(OBJS_BONUS_DIR) ] || mkdir -p $(OBJS_BONUS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@echo "\nCompiling $(BLUE)libft$(DEF_COLOR)"
	@make -sC $(LIBFT_DIR)

$(MLX):
	@echo "\nCompiling $(BLUE)mlx$(DEF_COLOR)"
	@make -sC $(MLX_DIR)

$(PRINTF):
	@echo "\nCompiling $(BLUE)printf$(DEF_COLOR)"
	@make -sC $(PRINTF_DIR)

bonus: $(NAME_BONUS) $(LIBFT) $(MLX) $(PRINTF) $(OBJS_BONUS) 
	@echo "\nCompiling $(BLUE)$(NAME_BONUS)$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(OBJS_BONUS) $(LDFLAGS) -o $(NAME)
	@echo "\n$(GREEN)$(NAME) compiled!$(DEF_COLOR)"
	@echo "$(BOLD_CYAN)\n------------\n| Done! 👌 |\n------------$(DEF_COLOR)"

clean:
	rm -rf $(OBJS_DIR)
	rm -rf $(OBJS_BONUS_DIR)
	make fclean -sC $(LIBFT_DIR)
	make clean -sC $(MLX_DIR)
	make fclean -sC $(PRINTF_DIR)

fclean: clean
	rm -rf $(NAME)
	@echo "$(GREEN)$(NAME)$(YELLOW) cleaned$(DEF_COLOR)"

re: fclean all

.PHONY: all clean fclean re
.SILENT: all clean fclean
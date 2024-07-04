/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:22 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/13 13:59:29 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "mlx.h"
# include "libft.h"
# include "ft_printf.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdio.h>

# ifndef keys
#  define KEY_ESC	65307
#  define KEY_DOWN	65364
#  define KEY_LEFT	65361
#  define KEY_RIGHT	65363
#  define KEY_UP	65362
#  define KEY_S		115
#  define KEY_A		97
#  define KEY_D		100
#  define KEY_W		119
# endif

// Colours
# define RED "\033[0;31m"
# define BLUE "\033[0;34m"
# define YELLOW "\033[0;33m"
# define GREEN "\033[0;32m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;97m"
# define RESET "\033[0m"

typedef struct s_frame
{
	void	*frame1;
	void	*frame2;
	void	*frame3;
	void	*frame4;
}			t_frame;

typedef struct s_sprites
{
	void	*wall;
	void	*floor;
	void	*coin;
	void	*back;
	t_frame	player_u;
	t_frame	player_d;
	t_frame	player_r;
	t_frame	player_l;
	t_frame	enemys;
	t_frame	exits;
}			t_sprites;

typedef struct s_player
{
	int	points;
	int	steps;
	int	y_pos;
	int	x_pos;
}		t_player;

typedef struct s_map
{
	int			player;
	int			exit;
	int			coin;
	int			width;
	int			height;
	int			x_exit;
	int			y_exit;
	int			key;
	char		**map;
	void		*mlx;
	void		*mlx_win;
	t_sprites	sprites;
	t_player	play;
}				t_map;

void	init_map_bonus(char *argv, t_map **map);
void	fill_map_bonus(char *argv, t_map *map);
void	so_error_bonus(int error, t_map *map);
void	so_error2_bonus(t_map *map);
void	free_map_bonus(t_map *map);
void	free_aux_bonus(char **checker);
void	pos_player_bonus(t_map *map);
void	fl_fill_bonus(char **checker, int x, int y);
void	init_game_bonus(t_map **map);
void	init_img_bonus(t_sprites *sprites, t_map **map);
void	find_exit_bonus(t_map *map);
void	init_background_bonus(t_map **map);
void	print_img_bonus(t_map **map, t_sprites *sprites, int x, int y);
void	error_create_img_bonus(t_sprites *sprite, t_map **map);
void	destroy_all_bonus(t_map **map);
void	set_mv_bonus(int keycode, t_map **map);
void	set_y_bonus(t_map **map, int i);
void	set_x_bonus(t_map **map, int i);
void	end_message_bonus(int i);
void	check_exit_bonus(t_map **map, char c);
void	check_enemy_bonus(t_map **map, char a);
void	init_enemy_bonus(t_sprites *sprites, t_map **map);
void	init_player_bonus(t_sprites *sprites, t_map **map);
void	init_exit_bonus(t_sprites *sprites, t_map **map);
void	destroy_imgbonus_bonus(t_map **map);
void	findenemy_bonus(t_map **map, int counter);
void	putportal_bonus(t_sprites *sprites, t_map **map, int counter);
void	putenemy_bonus(t_map **map, int counter, int x, int y);
void	printlose_bonus(void);
char	**copy_map_bonus(char *argv, char **checker);
int		check_name_bonus(char *argv, char *end);
int		check_name2_bonus(char *argv, char *end);
int		check_name3_bonus(char *argv, char *end);
int		number_lines_bonus(char *argv);
int		check_w_bonus(t_map *map);
int		map_len_bonus(char *str);
int		check_content_bonus(t_map *map, char *argv);
int		check_chars_bonus(char **checker, t_map *map);
int		check_ud_bonus(t_map *map);
int		check_lr_bonus(t_map *map);
int		check_limits_bonus(t_map *map);
int		init_fl_fill_bonus(char **checker, t_map *map);
int		is_valid_bonus(char **checker);
int		close_window_bonus(t_map **map);
int		key_press_hook_bonus(int keycode, t_map **map);
int		player_move_bonus(t_map **map, int x, int y);
int		animate_bonus(t_map **map);

#endif

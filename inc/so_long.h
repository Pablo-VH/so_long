/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:19:34 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/13 17:19:39 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

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

typedef struct s_sprites
{
	void	*player;
	void	*wall;
	void	*floor;
	void	*exit;
	void	*coin;
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
	char		**map;
	void		*mlx;
	void		*mlx_win;
	t_sprites	sprites;
	t_player	play;
}				t_map;

void	init_map(char *argv, t_map **map);
void	fill_map(char *argv, t_map *map);
void	so_error(int error, t_map *map);
void	so_error2(t_map *map);
void	free_map(t_map *map);
void	so_end(t_map *map);
void	free_aux(char **checker);
void	pos_player(t_map *map);
void	fl_fill(char **checker, int x, int y);
void	init_game(t_map **map);
void	init_img(t_sprites *sprites, t_map **map);
void	find_exit(t_map *map);
void	init_background(t_map **map);
void	print_img(t_map **map, t_sprites *sprites, int x, int y);
void	error_create_img(t_sprites *sprite, t_map **map);
void	destroy_all(t_map **map);
void	set_mv(int keycode, t_map **map);
void	set_y(t_map **map, int i);
void	set_x(t_map **map, int i);
void	end_message(int i);
void	check_exit(t_map **map, char c);
char	**copy_map(char *argv, char **checker);
int		check_name(char *argv, char *end);
int		check_name2(char *argv, char *end);
int		check_name3(char *argv, char *end);
int		number_lines(char *argv);
int		check_w(t_map *map);
int		map_len(char *str);
int		check_content(t_map *map, char *argv);
int		check_chars(char **checker, t_map *map);
int		check_ud(t_map *map);
int		check_lr(t_map *map);
int		check_limits(t_map *map);
int		init_fl_fill(char **checker, t_map *map);
int		is_valid(char **checker);
int		close_window(t_map **map);
int		key_press_hook(int keycode, t_map **map);
int		player_move(t_map **map, int x, int y);

#endif

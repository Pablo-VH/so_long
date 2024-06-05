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
# include <fcntl.h>
# include <stdio.h>
# include <stdio.h>

typedef struct s_map
{
	int		player;
	int		exit;
	int		coin;
	int		x;
	int		y;
	int		w_length;
	int		t_length;
	char	**map;
}			t_map;

void	init_map(char *argv, t_map *map);
void	fill_map(char *argv, t_map **map);
void	so_error(int error, t_map *map);
void	free_map(t_map *map);
void	so_end(t_map *map);
void	free_aux(char **checker);
void	pos_player(t_map **map);
void	parsing(char **checker, int x, int y);
char	**copy_map(char *argv, char **checker);
int		check_name(char *argv, char *end);
int		number_lines(char *argv);
int		check_w(t_map **map);
int		map_len(char *str);
int		check_content(t_map **map, char *argv);
int		check_chars(char **checker, t_map **map);
int		check_u_n_d(t_map **map);
int		check_lr(t_map **map);
int		check_limits(t_map **map);
int		init_parsing(char **checker, t_map **map);
int		is_valid(char **checker);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:30:10 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/29 12:30:12 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	init_parsing(char **checker, t_map *map)
{
	int	x;
	int	y;
	int	i;

	x = map->play.x_pos;
	y = map->play.y_pos;
	parsing(checker, x, y);
	i = is_valid(checker);
	return (i);
}

void	parsing(char **checker, int x, int y)
{
	checker[y][x] = 'P';
	if (checker[y - 1][x] != 'P' && checker[y - 1][x] != '1'
		&& checker[y - 1][x] != 'F')
		parsing(checker, x, y - 1);
	if (checker[y + 1][x] != 'P' && checker[y + 1][x] != '1'
		&& checker[y + 1][x] != 'F')
		parsing(checker, x, y + 1);
	if (checker[y][x - 1] != 'P' && checker[y][x - 1] != '1'
		&& checker[y][x - 1] != 'F')
		parsing(checker, x - 1, y);
	if (checker[y][x + 1] != 'P' && checker[y][x + 1] != '1'
		&& checker[y][x + 1] != 'F')
		parsing(checker, x + 1, y);
}

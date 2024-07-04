/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:30:10 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/27 12:36:19 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	init_fl_fill_bonus(char **checker, t_map *map)
{
	int	x;
	int	y;
	int	i;

	x = map->play.x_pos;
	y = map->play.y_pos;
	fl_fill_bonus(checker, x, y);
	i = is_valid_bonus(checker);
	return (i);
}

void	fl_fill_bonus(char **checker, int x, int y)
{
	checker[y][x] = 'P';
	if (checker[y - 1][x] != 'P' && checker[y - 1][x] != '1'
		&& checker[y - 1][x] != 'F')
		fl_fill_bonus(checker, x, y - 1);
	if (checker[y + 1][x] != 'P' && checker[y + 1][x] != '1'
		&& checker[y + 1][x] != 'F')
		fl_fill_bonus(checker, x, y + 1);
	if (checker[y][x - 1] != 'P' && checker[y][x - 1] != '1'
		&& checker[y][x - 1] != 'F')
		fl_fill_bonus(checker, x - 1, y);
	if (checker[y][x + 1] != 'P' && checker[y][x + 1] != '1'
		&& checker[y][x + 1] != 'F')
		fl_fill_bonus(checker, x + 1, y);
}

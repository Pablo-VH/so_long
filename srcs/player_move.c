/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:56:22 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/07 12:56:24 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	player_move(t_map **map, int x, int y)
{
	char	a;

	a = (*map)->map[y][x];
	if (a == '1')
	{
		return (0);
	}
	if (a == '0')
	{
		(*map)->map[(*map)->play.y_pos][(*map)->play.x_pos] = '0';
		(*map)->play.steps += 1;
		return (1);
	}
	if (a == 'C')
	{
		(*map)->map[(*map)->play.y_pos][(*map)->play.x_pos] = '0';
		(*map)->play.steps += 1;
		(*map)->play.points += 1;
		//if ((*map)->play.points == (*map)->coin)
			//
		return (1);
	}
	return (0);
}
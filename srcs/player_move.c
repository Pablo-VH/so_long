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
		return (0);
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
		if ((*map)->play.points == (*map)->coin)
			(*map)->map[(*map)->y_exit][(*map)->x_exit] = 'E';
		return (1);
	}
	check_exit(map, a);
	return (0);
}

void	check_exit(t_map **map, char a)
{
	if (a == 'E' && (*map)->play.points ==  (*map)->coin)
	{
		(*map)->play.steps += 1;
		ft_printf("\nSteps: %d\n", (*map)->play.steps);
		destroy_all(map);
		free_map(*map);
		exit(1);
		//deploy_message(1, game);
	}
}

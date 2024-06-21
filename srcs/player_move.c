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
	if (a == '0')
	{
		(*map)->map[(*map)->play.y_pos][(*map)->play.x_pos] = '0';
		(*map)->play.steps += 1;
		ft_printf("Steps: %d points: %d\n", (*map)->play.steps,
			(*map)->play.points);
		return (1);
	}
	if (a == 'C')
	{
		(*map)->map[(*map)->play.y_pos][(*map)->play.x_pos] = '0';
		(*map)->play.steps += 1;
		(*map)->play.points += 1;
		ft_printf("Steps: %d points: %d\n", (*map)->play.steps,
			(*map)->play.points);
		if ((*map)->play.points == (*map)->coin)
			(*map)->map[(*map)->y_exit][(*map)->x_exit] = 'E';
		return (1);
	}
	check_exit(map, a);
	return (0);
}

void	check_exit(t_map **map, char a)
{
	if (a == 'E' && (*map)->play.points == (*map)->coin)
	{
		(*map)->play.steps += 1;
		ft_printf("Steps: %d points: %d\n", (*map)->play.steps,
			(*map)->play.points);
		destroy_all(map);
		free_map(*map);
		end_message(1);
		exit(EXIT_FAILURE);
	}
}

void	end_message(int i)
{
	if (i == 0)
		ft_printf("\nYou closed the window :(\n");
	if (i == 1)
	{
		ft_printf(GREEN"▄ ▄ ▄▄▄ ▄ ▄    ▄ ▄ ▄▄▄ ▄ ▄   █         ▀▄ \n"RESET);
		ft_printf(GREEN"█ █ █ █ █ █    █▄█  █  ███   █     ▀    █ \n"RESET);
		ft_printf(GREEN" █  █▄█ █▄█    ███ ▄█▄ █▀█   ▄     ▄    █ \n"RESET);
		ft_printf(GREEN"                                       ▀\n"RESET);
	}
}

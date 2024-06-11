/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:30:34 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/07 12:30:36 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	close_window(t_map **map)
{
	destroy_all(map);
	exit(1);
	return (0);
}

int	key_press_hook(int keycode, t_map **map)
{
	set_mv(keycode, map);
	if (keycode == KEY_ESC)
	{
		destroy_all(map);
		free_map((*map));
		exit(1);
	}
	init_background(map);
	return (0);
}

void	set_mv(int keycode, t_map **map)
{
	if (keycode == KEY_UP)
	{
		if (player_move(map, (*map)->play.x_pos, (*map)->play.y_pos - 1))
			set_y(map, -1);
	}
	if (keycode == KEY_DOWN)
	{
		if (player_move(map, (*map)->play.x_pos, (*map)->play.y_pos + 1))
			set_y(map, 1);
	}
	if (keycode == KEY_LEFT)
	{
		if (player_move(map, (*map)->play.x_pos - 1, (*map)->play.y_pos))
			set_x(map, -1);
	}
	if (keycode == KEY_RIGHT)
	{
		if (player_move(map, (*map)->play.x_pos + 1, (*map)->play.y_pos))
			set_x(map, 1);
	}
}

void	set_y(t_map **map, int i)
{
	(*map)->play.y_pos = (*map)->play.y_pos + i;
	(*map)->map[(*map)->play.y_pos][(*map)->play.x_pos] = 'P';
}

void	set_x(t_map **map, int i)
{
	(*map)->play.x_pos = (*map)->play.x_pos + i;
	(*map)->map[(*map)->play.y_pos][(*map)->play.x_pos] = 'P';
}

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

#include "so_long_bonus.h"

int	close_window_bonus(t_map **map)
{
	destroy_all_bonus(map);
	free_map_bonus(*map);
	end_message_bonus(0);
	exit(EXIT_SUCCESS);
	return (0);
}

int	key_press_hook_bonus(int keycode, t_map **map)
{
	set_mv_bonus(keycode, map);
	if (keycode == KEY_ESC)
	{
		destroy_all_bonus(map);
		free_map_bonus((*map));
		end_message_bonus(0);
		exit(EXIT_SUCCESS);
	}
	if (keycode == KEY_UP || keycode == KEY_W)
		(*map)->key = 1;
	if (keycode == KEY_DOWN || keycode == KEY_S)
		(*map)->key = 2;
	if (keycode == KEY_LEFT || keycode == KEY_A)
		(*map)->key = 3;
	if (keycode == KEY_RIGHT || keycode == KEY_D)
		(*map)->key = 4;
	init_background_bonus(map);
	return (0);
}

void	set_mv_bonus(int keycode, t_map **map)
{
	if (keycode == KEY_UP || keycode == KEY_W)
	{
		if (player_move_bonus(map, (*map)->play.x_pos, (*map)->play.y_pos - 1))
			set_y_bonus(map, -1);
	}
	if (keycode == KEY_DOWN || keycode == KEY_S)
	{
		if (player_move_bonus(map, (*map)->play.x_pos, (*map)->play.y_pos + 1))
			set_y_bonus(map, 1);
	}
	if (keycode == KEY_LEFT || keycode == KEY_A)
	{
		if (player_move_bonus(map, (*map)->play.x_pos - 1, (*map)->play.y_pos))
			set_x_bonus(map, -1);
	}
	if (keycode == KEY_RIGHT || keycode == KEY_D)
	{
		if (player_move_bonus(map, (*map)->play.x_pos + 1, (*map)->play.y_pos))
			set_x_bonus(map, 1);
	}
}

void	set_y_bonus(t_map **map, int i)
{
	(*map)->play.y_pos = (*map)->play.y_pos + i;
	(*map)->map[(*map)->play.y_pos][(*map)->play.x_pos] = 'P';
}

void	set_x_bonus(t_map **map, int i)
{
	(*map)->play.x_pos = (*map)->play.x_pos + i;
	(*map)->map[(*map)->play.y_pos][(*map)->play.x_pos] = 'P';
}

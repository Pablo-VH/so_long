/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:20:23 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/27 12:38:12 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	error_size(t_map **map)
{
	ft_printf(RED"Map too big\n"RESET);
	mlx_destroy_display((*map)->mlx);
	free((*map)->mlx);
	free_map_bonus(*map);
	exit(EXIT_FAILURE);
}

void	init_game_bonus(t_map **map)
{
	int	x;
	int	y;

	(*map)->mlx = mlx_init();
	mlx_get_screen_size((*map)->mlx, &x, &y);
	if (x < ((*map)->width * 64) || y < ((*map)->height * 64))
		error_size(map);
	(*map)->mlx_win = mlx_new_window((*map)->mlx, ((*map)->width * 64),
			((*map)->height * 64), "So_long");
	init_img_bonus(&(*map)->sprites, map);
	find_exit_bonus(*map);
	(*map)->play.steps = 0;
	(*map)->play.points = 0;
	init_background_bonus(map);
	mlx_hook((*map)->mlx_win, 17, 0, close_window_bonus, map);
	mlx_loop_hook((*map)->mlx, animate_bonus, map);
	ft_printf("Steps: %d points: %d\n", (*map)->play.steps,
		(*map)->play.points);
	mlx_hook((*map)->mlx_win, 2, 1L >> 0, key_press_hook_bonus, map);
	mlx_loop((*map)->mlx);
}

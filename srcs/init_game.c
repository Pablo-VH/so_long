/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:20:23 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/06 13:26:01 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_game(t_map **map)
{
	int	x;
	int	y;

	printf("\n%dx%d", (*map)->w_length, (*map)->t_length);
	(*map)->mlx = mlx_init();
	mlx_get_screen_size((*map)->mlx, &x, &y);
	printf("\n%dx%d\n", x, y);
	if (x < ((*map)->w_length * 64) || y < ((*map)->t_length * 64))
	{
		perror("Mapa muy grande");
		mlx_loop_end((*map)->mlx);
		mlx_destroy_display((*map)->mlx);
		free((*map)->mlx);
		exit(1);
	}
	printf("comprobado");
	(*map)->mlx_win = mlx_new_window((*map)->mlx, ((*map)->w_length * 64), ((*map)->t_length * 64), "So_long");
	init_img(&(*map)->sprites, *map);	
	find_exit(*map);
	printf("encontrado");
	init_background(map);
	(*map)->play.steps = 0;
	(*map)->play.points = 0;
	printf("\nSteps: %d points: %d", (*map)->play.steps, (*map)->play.points);
	mlx_hook((*map)->mlx_win, 17, 0, close_window, map);
	mlx_hook((*map)->mlx_win, 2, 1L >> 0, key_press_hook, map);
	mlx_loop((*map)->mlx);
}

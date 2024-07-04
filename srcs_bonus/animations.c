/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:51:47 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/27 12:33:18 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	animate_bonus(t_map **map)
{
	static int	counter;

	if (!(*map)->sprites.enemys.frame2)
		return (1);
	if (!counter)
		counter = 0;
	findenemy_bonus(map, counter);
	putportal_bonus(&(*map)->sprites, map, counter);
	counter++;
	if (counter == 3000)
		counter = 0;
	return (0);
}

void	putenemy_bonus(t_map **map, int counter, int x, int y)
{
	if (counter == 750)
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
			(*map)->sprites.enemys.frame2, x * 64, y * 64);
	if (counter == 1500)
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
			(*map)->sprites.enemys.frame3, x * 64, y * 64);
	if (counter == 2250)
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
			(*map)->sprites.enemys.frame4, x * 64, y * 64);
	if (counter == 2999)
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
			(*map)->sprites.enemys.frame1, x * 64, y * 64);
}

void	findenemy_bonus(t_map **map, int counter)
{
	int	y;
	int	x;

	y = 0;
	while ((*map)->map[y] != NULL)
	{
		x = 0;
		while (x < (*map)->width)
		{
			if ((*map)->map[y][x] == 'F')
			{
				putenemy_bonus(map, counter, x, y);
			}
			x++;
		}
		y++;
	}
}

void	putportal_bonus(t_sprites *sprites, t_map **map, int counter)
{
	if ((*map)->map[(*map)->y_exit][(*map)->x_exit] == 'E')
	{
		if (counter == 750)
			mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
				sprites->exits.frame2, (*map)->x_exit * 64,
				(*map)->y_exit * 64);
		if (counter == 1500)
			mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
				sprites->exits.frame3, (*map)->x_exit * 64,
				(*map)->y_exit * 64);
		if (counter == 2250)
			mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
				sprites->exits.frame4, (*map)->x_exit * 64,
				(*map)->y_exit * 64);
		if (counter == 2999)
			mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
				sprites->exits.frame1, (*map)->x_exit * 64,
				(*map)->y_exit * 64);
	}
}

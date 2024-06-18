/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_background.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:01:16 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/06 18:01:19 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_img(t_map **map, t_sprites *sprites, int x, int y)
{
	if ((*map)->map[y][x] == '1')
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win, sprites->wall,
			x * 64, y * 64);
	if ((*map)->map[y][x] == '0')
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win, sprites->floor,
			x * 64, y * 64);
	if ((*map)->map[y][x] == 'C')
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win, sprites->coin,
			x * 64, y * 64);
	if ((*map)->map[y][x] == 'E')
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win, sprites->exit,
			x * 64, y * 64);
	if ((*map)->map[y][x] == 'P')
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win, sprites->player,
			x * 64, y * 64);
}

void	init_background(t_map **map)
{
	int	x;
	int	y;

	y = 0;
	while ((*map)->map[y])
	{
		x = 0;
		while (x < (*map)->w_length)
		{
			print_img(map, &(*map)->sprites, x, y);
			x++;
		}
		y++;
	}
}

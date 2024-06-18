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

#include "so_long_bonus.h"

void	print_counter(t_map **map)
{
	int	y;
	int	x;
	int	steps;
	char	*str;
	int		pt;
	char	*points;

	y = (*map)->t_length;
	x = 1;
	steps = (*map)->play.steps;
	pt = (*map)->play.points;
	points = ft_itoa(pt);
	str = ft_itoa(steps);
	mlx_string_put((*map)->mlx, (*map)->mlx_win, x * 64, y * 64,
		0xFFFFFF,"Steps: ");
	mlx_string_put((*map)->mlx, (*map)->mlx_win, (x + 2) * 64, y * 64,
		0xFFFFFF, str);
	mlx_string_put((*map)->mlx, (*map)->mlx_win, (x + 4) * 64, y * 64,
		0xFFFFFF,"Points: ");
	mlx_string_put((*map)->mlx, (*map)->mlx_win, (x + 6) * 64, y * 64,
		0xFFFFFF, points);
	free(str);
	free(points);
}

void	print_p(t_map **map, t_sprites *sprites, int x, int y)
{
	if ((*map)->map[y][x] == 'P' && (*map)->key == 2)
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
			sprites->player_d.frame1, x * 64, y * 64);
	if ((*map)->map[y][x] == 'P' && (*map)->key == 1)
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
			sprites->player_u.frame1, x * 64, y * 64);
	if ((*map)->map[y][x] == 'P' && (*map)->key == 3)
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
			sprites->player_l.frame1, x * 64, y * 64);
	if ((*map)->map[y][x] == 'P' && (*map)->key == 4)
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
			sprites->player_r.frame1, x * 64, y * 64);
}

void	print_img(t_map **map, t_sprites *sprites, int x, int y)
{
	if ((*map)->map[y][x] == '1')
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
			sprites->wall, x * 64, y * 64);
	if ((*map)->map[y][x] == '0')
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
			sprites->floor, x * 64, y * 64);
	if ((*map)->map[y][x] == 'C')
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
			sprites->coin, x * 64, y * 64);
	if ((*map)->map[y][x] == 'E')
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
			sprites->exits.frame1, x * 64, y * 64);
	print_p(map, sprites, x, y);
	if ((*map)->map[y][x] == 'F')
		mlx_put_image_to_window((*map)->mlx, (*map)->mlx_win,
			sprites->enemys.frame1, x * 64, y * 64);
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
	mlx_set_font((*map)->mlx, (*map)->mlx_win, "12x24romankana");
	print_counter(map);
}

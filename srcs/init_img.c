/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:25:35 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/06 13:25:38 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_img(t_sprites *sprites, t_map	*map)
{
	int	x;
	int	y;

	sprites->player = mlx_xpm_file_to_image(map->mlx, "assets/player64.xpm", &x, &y);
	sprites->exit = mlx_xpm_file_to_image(map->mlx, "assets/exit64.xpm", &x, &y);
	sprites->floor = mlx_xpm_file_to_image(map->mlx, "assets/floor64.xpm", &x, &y);
	sprites->wall = mlx_xpm_file_to_image(map->mlx, "assets/wall64.xpm", &x, &y);
	sprites->coin = mlx_xpm_file_to_image(map->mlx, "assets/coin64.xpm", &x, &y);
	error_create_img(&map->sprites);
}

void	error_create_img(t_sprites *sprite/* t_map *map*/)
{
	if (sprite->coin == NULL || sprite->floor == NULL
		|| sprite->player == NULL || sprite->wall == NULL
		|| sprite->exit == NULL)
	{
		printf("Error loading images");
		exit(1);
		//destroy_all(game);
	}
}

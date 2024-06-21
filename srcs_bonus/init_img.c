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

#include "so_long_bonus.h"

void	init_img(t_sprites *sprites, t_map	**map)
{
	int	x;
	int	y;

	init_exit(sprites, map);
	init_player(sprites, map);
	init_enemy(sprites, map);
	sprites->floor = mlx_xpm_file_to_image((*map)->mlx, "assets/floor64.xpm",
			&x, &y);
	sprites->wall = mlx_xpm_file_to_image((*map)->mlx, "assets/wall64.xpm",
			&x, &y);
	sprites->coin = mlx_xpm_file_to_image((*map)->mlx, "assets/coin64.xpm",
			&x, &y);
	error_create_img(&(*map)->sprites, map);
}

void	error_create_img(t_sprites *sprite, t_map **map)
{
	if (sprite->coin == NULL || sprite->floor == NULL || sprite->wall == NULL
		|| sprite->player_d.frame1 == NULL || sprite->player_u.frame1 == NULL
		|| sprite->player_r.frame1 == NULL || sprite->player_l.frame1 == NULL
		|| sprite->exits.frame1 == NULL || sprite->exits.frame2 == NULL
		|| sprite->exits.frame3 == NULL || sprite->exits.frame4 == NULL
		|| sprite->enemys.frame1 == NULL || sprite->enemys.frame2 == NULL
		|| sprite->enemys.frame3 == NULL || sprite->enemys.frame4 == NULL)
	{
		ft_printf("Error loading images");
		destroy_all(map);
		free_map(*map);
		exit(EXIT_FAILURE);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:42:59 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/27 12:38:53 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	init_player_bonus(t_sprites *sprites, t_map **map)
{
	int	x;
	int	y;

	sprites->player_u.frame1 = mlx_xpm_file_to_image((*map)->mlx,
			"assets/bonus/link/u1p.xpm", &x, &y);
	sprites->player_d.frame1 = mlx_xpm_file_to_image((*map)->mlx,
			"assets/bonus/link/D1.xpm", &x, &y);
	sprites->player_l.frame1 = mlx_xpm_file_to_image((*map)->mlx,
			"assets/bonus/link/l1.xpm", &x, &y);
	sprites->player_r.frame1 = mlx_xpm_file_to_image((*map)->mlx,
			"assets/bonus/link/r1.xpm", &x, &y);
}

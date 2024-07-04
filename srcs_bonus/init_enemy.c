/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_enemy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:59:52 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/27 12:37:47 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	init_enemy_bonus(t_sprites *sprites, t_map **map)
{
	int	x;
	int	y;

	sprites->enemys.frame1 = mlx_xpm_file_to_image((*map)->mlx,
			"assets/bonus/fire/fire1.xpm", &x, &y);
	sprites->enemys.frame2 = mlx_xpm_file_to_image((*map)->mlx,
			"assets/bonus/fire/fire2.xpm", &x, &y);
	sprites->enemys.frame3 = mlx_xpm_file_to_image((*map)->mlx,
			"assets/bonus/fire/fire3.xpm", &x, &y);
	sprites->enemys.frame4 = mlx_xpm_file_to_image((*map)->mlx,
			"assets/bonus/fire/fire4.xpm", &x, &y);
}

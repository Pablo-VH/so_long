/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:49:59 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/17 10:50:03 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	init_exit(t_sprites *sprites, t_map **map)
{
	int	x;
	int	y;

	sprites->exits.frame1 = mlx_xpm_file_to_image((*map)->mlx,
			"assets/bonus/portal/portal1.xpm", &x, &y);
	sprites->exits.frame2 = mlx_xpm_file_to_image((*map)->mlx,
			"assets/bonus/portal/portal2.xpm", &x, &y);
	sprites->exits.frame3 = mlx_xpm_file_to_image((*map)->mlx,
			"assets/bonus/portal/portal3.xpm", &x, &y);
	sprites->exits.frame4 = mlx_xpm_file_to_image((*map)->mlx,
			"assets/bonus/portal/portal4.xpm", &x, &y);
}

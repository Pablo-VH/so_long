/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:58:45 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/07 12:35:53 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	destroy_all(t_map **map)
{
	if ((*map)->sprites.coin)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.coin);
	if ((*map)->sprites.exit)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.exit);
	if ((*map)->sprites.wall)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.wall);
	if ((*map)->sprites.floor)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.floor);
	if ((*map)->sprites.player)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.player);
	mlx_destroy_window((*map)->mlx, (*map)->mlx_win);
	mlx_loop_end((*map)->mlx);
	mlx_destroy_display((*map)->mlx);
	free((*map)->mlx);
	(*map)->mlx = NULL;
}

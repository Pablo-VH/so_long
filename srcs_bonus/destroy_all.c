/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:58:45 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/27 12:35:30 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	destroy_all_bonus(t_map **map)
{
	if ((*map)->sprites.coin)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.coin);
	destroy_imgbonus_bonus(map);
	if ((*map)->sprites.wall)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.wall);
	if ((*map)->sprites.floor)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.floor);
	mlx_destroy_window((*map)->mlx, (*map)->mlx_win);
	mlx_loop_end((*map)->mlx);
	mlx_destroy_display((*map)->mlx);
	free((*map)->mlx);
	(*map)->mlx = NULL;
}

void	destroy_imgbonus_bonus(t_map **map)
{
	if ((*map)->sprites.exits.frame1)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.exits.frame1);
	if ((*map)->sprites.exits.frame2)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.exits.frame2);
	if ((*map)->sprites.exits.frame3)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.exits.frame3);
	if ((*map)->sprites.exits.frame4)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.exits.frame4);
	if ((*map)->sprites.player_d.frame1)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.player_d.frame1);
	if ((*map)->sprites.player_u.frame1)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.player_u.frame1);
	if ((*map)->sprites.player_l.frame1)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.player_l.frame1);
	if ((*map)->sprites.player_r.frame1)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.player_r.frame1);
	if ((*map)->sprites.enemys.frame1)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.enemys.frame1);
	if ((*map)->sprites.enemys.frame2)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.enemys.frame2);
	if ((*map)->sprites.enemys.frame3)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.enemys.frame3);
	if ((*map)->sprites.enemys.frame4)
		mlx_destroy_image((*map)->mlx, (*map)->sprites.enemys.frame4);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_player.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:10:08 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/29 11:10:10 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	pos_player(t_map **map)
{
	int	i;
	int	j;
	
	i = 0;
	while ((*map)->map[i])
	{
		j = 0;
		while ((*map)->map[i][j])
		{
			if ((*map)->map[i][j] == 'P')
			{
				(*map)->y = i;
				(*map)->x = j;
			}
			j++;
		}
		i++;
	}
}

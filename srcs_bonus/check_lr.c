/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_lr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:49:27 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/29 10:49:28 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	check_lr(t_map *map)
{
	int	i;
	int	j;

	j = map->w_length - 1;
	i = 0;
	while (map->map[i])
	{
		if (map->map[i][0] != '1')
			return (1);
		i++;
	}
	i = 0;
	while (map->map[i])
	{
		if (map->map[i][j] != '1')
			return (1);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_w.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:01:13 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/23 10:01:20 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	check_w(t_map *map)
{
	int	i;
	int	first;

	i = 0;
	first = map_len(map->map[i]);
	while (map->map[i])
	{
		if (first != map_len(map->map[i]))
			return (1);
		i++;
	}
	map->w_length = first;
	return (0);
}

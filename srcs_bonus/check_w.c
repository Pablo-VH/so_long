/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_w.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:01:13 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/27 12:35:01 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	check_w_bonus(t_map *map)
{
	int	i;
	int	first;

	i = 0;
	first = map_len_bonus(map->map[i]);
	while (map->map[i])
	{
		if (first != map_len_bonus(map->map[i]))
			return (1);
		i++;
	}
	map->width = first;
	return (0);
}

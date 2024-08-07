/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ud.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:09:10 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/27 12:34:44 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	check_ud_bonus(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	j = map->height - 1;
	while (map->map[0][i])
	{
		if ((map->map[0][i] != '1' && map->map[0][i] != '\n')
			|| (map->map[j][i] != '1' && map->map[j][i] != '\n'
				&& map->map[j][i] != '\0'))
			return (1);
		i++;
	}
	return (0);
}

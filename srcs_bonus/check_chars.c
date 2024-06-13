/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:33:38 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/28 10:33:42 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	check_chars(char **checker, t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (checker[i] != 0)
	{
		j = 0;
		while (checker[i][j])
		{
			if (checker[i][j] != 'P' && checker[i][j] != 'E' &&
			checker[i][j] != 'C' && checker[i][j] != '1' &&
			checker[i][j] != '0' && checker[i][j] != '\n' &&
			checker[i][j] != 'F')
				return (1);
			if (checker[i][j] == 'P')
				map->player = map->player + 1;
			if (checker[i][j] == 'E')
				map->exit = map->exit + 1;
			if (checker[i][j] == 'C')
				map->coin = map->coin + 1;
			j++;
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:00:16 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/27 12:35:51 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	fill_map_bonus(char *argv, t_map *map)
{
	int		nl;
	int		fd;
	int		i;

	i = 0;
	nl = number_lines_bonus(argv);
	if (nl == -1 || nl == 0)
		so_error_bonus(4, map);
	map->height = nl;
	map->map = (char **)ft_calloc((nl + 1), (sizeof (char *)));
	if (!map->map)
		so_error_bonus(3, map);
	map->map[nl] = NULL;
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		so_error_bonus(1, map);
	while (i < nl)
	{
		map->map[i] = get_next_line(fd);
		i++;
	}
	close(fd);
}

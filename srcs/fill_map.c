/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:00:16 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/13 18:02:14 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	fill_map(char *argv, t_map *map)
{
	int		nl;
	int		fd;
	int		i;

	i = 0;
	nl = number_lines(argv);
	if (nl == -1 || nl == 0)
		so_error(4, map);
	map->height = nl;
	map->map = (char **)ft_calloc((nl + 1), sizeof(char *));
	if (!map->map)
		so_error(3, map);
	map->map[nl] = NULL;
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		so_error(1, map);
	while (i < nl)
	{
		map->map[i] = get_next_line(fd);
		i++;
	}
	close(fd);
}

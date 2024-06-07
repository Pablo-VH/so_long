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
	map->t_length = nl;
	map->map = (char **)malloc((sizeof (char *) * (nl + 1)));
	if (!map->map)
		exit(1);
	map->map[nl] = NULL;
	fd = open(argv, O_RDONLY);
	while (i < nl)
	{
		map->map[i] = get_next_line(fd);
		i++;
	}
	close(fd);
	printf("fill_map\n");
	for (int j = 0; j < nl; j++)
	{
		printf("%s", map->map[j]);
	}
}

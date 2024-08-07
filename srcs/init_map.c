/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:18:08 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/13 17:18:12 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_map(char *argv, t_map **map)
{
	*map = malloc(sizeof(t_map));
	if (!*map)
		exit(EXIT_FAILURE);
	if (check_name(argv, ".ber") == 1 || check_name2(argv, "Maps/.ber") == 1)
		so_error(4, *map);
	if (check_name3(argv, "Maps/"))
		so_error2(*map);
	(*map)->coin = 0;
	(*map)->exit = 0;
	(*map)->player = 0;
	fill_map(argv, *map);
	if ((*map)->map == NULL)
		so_error(4, *map);
	if (check_w(*map) == 1)
		so_error(2, *map);
	if ((*map)->width > 164 && (*map)->height > 64)
		so_error(2, *map);
	if (check_content(*map, argv) == 1)
		so_error(2, *map);
}

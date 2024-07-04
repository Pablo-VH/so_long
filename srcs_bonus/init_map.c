/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:18:08 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/27 12:38:40 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	init_map_bonus(char *argv, t_map **map)
{
	*map = malloc(sizeof(t_map));
	if (!*map)
		exit(EXIT_FAILURE);
	if (check_name_bonus(argv, ".ber") == 1
		|| check_name2_bonus(argv, "Maps/.ber") == 1)
		so_error_bonus(4, *map);
	if (check_name3_bonus(argv, "Maps/"))
		so_error2_bonus(*map);
	(*map)->coin = 0;
	(*map)->exit = 0;
	(*map)->player = 0;
	fill_map_bonus(argv, *map);
	if ((*map)->map == NULL)
		so_error_bonus(4, *map);
	if (check_w_bonus(*map) == 1)
		so_error_bonus(2, *map);
	if ((*map)->width > 164 && (*map)->height > 64)
		so_error_bonus(2, *map);
	if (check_content_bonus(*map, argv) == 1)
		so_error_bonus(2, *map);
}

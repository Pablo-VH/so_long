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

#include "../headers/so_long.h"

void	init_map(char *argv)
{
	t_map	*map;
	
	map = malloc(sizeof(t_map));
	if (check_name(argv, ".ber") == 1)
		so_error(1, map);
	fill_map(argv, &map);
	if (check_w(&map) == 1)
		so_error(2, map);
	if (check_content(&map) == 1)
	{
		 
	}
	printf("Antes de terminar\n");
	for (int j = 0; j < map->t_length; j++)
	{
		printf("%s", map->map[j]);
	}
	so_end(map);
}
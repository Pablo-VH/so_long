/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_content.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:36:25 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/27 12:36:28 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_content(t_map *map, char *argv)
{
	char	**checker;
	int		i;

	checker = (char **)malloc(sizeof(char *) * (map->height + 1));
	checker = copy_map(argv, checker);
	i = check_chars(checker, map);
	i += check_limits(map);
	i += check_ud(map);
	i += check_lr(map);
	if (i != 0)
		return (free_aux(checker), 1);
	pos_player(map);
	if (init_fl_fill(checker, map) == 1)
		return (free_aux(checker), 1);
	free_aux(checker);
	return (0);
}

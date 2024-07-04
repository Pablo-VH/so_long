/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_content.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:36:25 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/27 12:33:51 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	check_content_bonus(t_map *map, char *argv)
{
	char	**checker;
	int		i;

	checker = (char **)malloc(sizeof(char *) * (map->height + 1));
	checker = copy_map_bonus(argv, checker);
	i = check_chars_bonus(checker, map);
	i += check_limits_bonus(map);
	i += check_ud_bonus(map);
	i += check_lr_bonus(map);
	if (i != 0)
	{
		free_aux_bonus(checker);
		return (1);
	}
	pos_player_bonus(map);
	if (init_fl_fill_bonus(checker, map) == 1)
	{
		free_aux_bonus(checker);
		return (1);
	}
	free_aux_bonus(checker);
	return (0);
}

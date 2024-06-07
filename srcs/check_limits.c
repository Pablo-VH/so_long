/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_limits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:02:49 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/29 11:02:51 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_limits(t_map *map)
{
	if (map->coin < 1)
		return (1);
	if (map->exit != 1)
		return (1);
	if (map->player != 1)
		return (1);
	return (0);
}

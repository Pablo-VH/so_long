/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_u_n_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:09:10 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/28 14:09:13 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_u_n_d(t_map **map)
{
	int	i;

	i = 0;
	while ((*map)->map[0][i])
	{
		if ((*map)->map[0][i] != '1' && (*map)->map[0][i] != '\n')
			return (1);
		i++;
	}
	i = 0;
	while ((*map)->map[(*map)->t_length - 1][i])
	{
		if ((*map)->map[(*map)->t_length - 1][i] != '1' && (*map)->map[(*map)->t_length - 1][i] != '\n')
			return (1);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:54:33 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/30 11:54:36 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_valid(char **checker)
{
	int	i;
	int	j;

	i = 0;
	while (checker[i])
	{
		j = 0;
		while (checker[i][j])
		{
			if (checker[i][j] == 'C' || checker[i][j] == 'E')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

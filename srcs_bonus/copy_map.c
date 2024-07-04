/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:36:36 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/27 12:37:27 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	**copy_map_bonus(char *argv, char **checker)
{
	int	i;
	int	fd;

	i = 0;
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while (1)
	{
		checker[i] = get_next_line(fd);
		if (checker[i] == NULL)
			break ;
		i++;
	}
	return (checker);
}

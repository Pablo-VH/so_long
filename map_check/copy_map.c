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

#include "../headers/so_long.h"

char	**copy_map(t_map **map, char **checker)
{
	int	i;

	i = 0;
	while ((*map)->map[i])
	{
		checker[i] = (*map)->map[i];
		i++;
	}
	printf("\ncopy_map: Dentro de checker\n");
	for (int k = 0; k < (*map)->t_length ; k++)
	{
		printf("%s\n", checker[k]);
	}
	return(checker);
}

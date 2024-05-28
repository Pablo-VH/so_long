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

#include "../headers/so_long.h"

int	check_content(t_map **map, char *argv)
{
	char	**checker;

	checker = (char **)malloc(sizeof(char *) * ((*map)->t_length + 1));
	checker = copy_map(argv, checker);
	if (check_chars(checker, map) == 1)
	{
		free_aux(checker);
		return (1);
	}
	/*if (check_limits(map) == 1)
	{
		free_aux(checker);
		return (1);
	}*/
	if (check_u_n_d(map) == 1)
	{
		free_aux(checker);
		return (1);	
	}
	printf("P = %d C = %d E = %d", (*map)->player, (*map)->coin, (*map)->exit);
	free_aux(checker);
	return (0);
}

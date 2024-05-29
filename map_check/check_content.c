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
	int		i;
	int		j;
	int		k;
	int		l;

	checker = (char **)malloc(sizeof(char *) * ((*map)->t_length + 1));
	checker = copy_map(argv, checker);
	i = check_chars(checker, map);
	j = check_limits(map);
	k = check_u_n_d(map);
	l = check_lr(map);
	printf("i = %d, j = %d, k = %d, l = %d", i, j, k, l);
	if (i == 1 || j == 1 || k == 1 || l == 1)
	{
		free_aux(checker);
		return (1);	
	}
	pos_player(map);
	if (parsing(checker) == 1){
		free_aux(checker);
		return (1);
	}
	printf("\nP = %d C = %d E = %d\n", (*map)->player, (*map)->coin, (*map)->exit);
	printf("Posicion jugador: %d,%d", (*map)->y, (*map)->x);
	free_aux(checker);
	return (0);
}

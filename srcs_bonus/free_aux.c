/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_aux.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:10:02 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/27 12:36:39 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	free_aux_bonus(char **checker)
{
	int	i;

	i = 0;
	while (checker[i])
	{
		free(checker[i]);
		i++;
	}
	free(checker);
	checker = NULL;
}

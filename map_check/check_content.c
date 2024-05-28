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

int	check_content(t_map **map)
{
	char	**checker;

	checker = (char **)malloc(sizeof(char*) * (*map)->t_length + 1);
	checker = copy_map(map, checker);
	if(check_chars(checker) == 1)
		return (1);
	free(checker);
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:45:22 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/13 17:45:27 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	so_error(int error, t_map *map)
{
	if (error == 1)
	{
		free_map(map);
		ft_printf(RED "Error opening the file\n" RESET);
		exit(EXIT_FAILURE);
	}
	if (error == 2)
	{
		free_map(map);
		ft_printf(RED"Not valid map\n"RESET);
		exit(EXIT_FAILURE);
	}
	if (error == 3)
	{
		free_map(map);
		ft_printf(RED"Not enough memory\n"RESET);
		exit(EXIT_FAILURE);
	}
	if (error == 4)
	{
		free(map);
		ft_printf(RED"Empty map or file not valid\n"RESET);
		exit(EXIT_FAILURE);
	}
}

void	so_error2(t_map *map)
{
	free(map);
	ft_printf(RED"Wrong directory\n"RESET);
	exit(EXIT_FAILURE);
}

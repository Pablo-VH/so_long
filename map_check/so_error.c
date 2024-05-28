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

#include "../headers/so_long.h"

void	so_error(int error, t_map *map)
{
	if (error == 1)
	{
		free_map(map);
		perror("Error al abrir el archivo");
		exit(2);
	}
	if (error == 2)
	{
		free_map(map);
		perror("Mapa no valido");
		exit(-1);
	}
	if (error == 3)
	{
		free_map(map);
		perror("No hay suficiente memoria");
		exit(-1);
	}
}

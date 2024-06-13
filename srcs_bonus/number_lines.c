/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_lines.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:35:59 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/27 12:36:03 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	number_lines(char *argv)
{
	int		num_lines;
	int		fd;
	char	*line;

	num_lines = 0;
	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		perror ("Error al abrir el archivo");
		exit(1);
	}
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		free(line);
		num_lines++;
	}
	close(fd);
	return (num_lines);
}

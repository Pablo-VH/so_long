/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:24:57 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/14 12:35:43 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
//#include <fcntl.h>
//#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	char	a;
	int		file_descriptor;

	a = 'a';
	file_descriptor = open("texto", O_WRONLY);
	ft_putchar_fd(a, file_descriptor);
	return (0);
}*/

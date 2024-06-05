/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:18:27 by pavicent          #+#    #+#             */
/*   Updated: 2024/01/26 13:25:16 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

size_t	ft_strlen(const char *s)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		j++;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	const char	*s;

	s = "Hola mundo";
	printf("El tamano del string es = %lu\n", ft_strlen(s));
	return (0);
}*/

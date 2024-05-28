/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:20:52 by pavicent          #+#    #+#             */
/*   Updated: 2024/01/30 09:47:44 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*int	main(void)
{
	const char	*s;
	int		c;

	s = "Hola Mundo";
	c = '\0';
	char *result;
	result= strchr(s, c);
	if (result != NULL)
	{
		printf("caracter encontrado: %c\n", *result);
		printf("Posicion en la cadena: %ld\n", result - s);
	}
	else
		printf("Caracter no encontrado.\n");
		
	result = ft_strchr(s, c);
	if (result != NULL)
	{
		printf("Mi caracter encontrado: %c\n", *result);
		printf("Mi Posicion en la cadena: %ld\n", result - s);
	}
	else
		printf("Mi Caracter no encontrado.\n");
	return (0);
}*/

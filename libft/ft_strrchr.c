/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:18:40 by pavicent          #+#    #+#             */
/*   Updated: 2024/01/30 10:02:19 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
/*#include <string.h>
#include <stdio.h>*/

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = ft_strlen(s);
	while (count >= 0)
	{
		if (s[count] == (char)c)
			return ((char *)&s[count]);
		count--;
	}
	return (0);
}

/*int    main(void)
{
    const char    *s;
    int        c;

    s = "";
    c = 'o';
    char *result;
    result= strrchr(s, c);
    if (result != NULL)
    {
        printf("caracter encontrado: %c\n", *result);
        printf("Posicion en la cadena: %ld\n", result - s);
    }
    else
        printf("Caracter no encontrado.\n");

    result = ft_strrchr(s, c);
    if (result != NULL)
    {
        printf("Mi caracter encontrado: %c\n", *result);
        printf("Mi Posicion en la cadena: %ld\n", result - s);
    }
    else
        printf("Mi Caracter no encontrado.\n");
}*/

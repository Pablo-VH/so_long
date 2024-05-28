/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:12:33 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:33:31 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
//#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*static void	ft_toupper_mapi(unsigned int i, char *c)
{
	if (c[i] >= 'a' && c[i] <= 'z')
		c[i] = c[i] - 'a' + 'A';
}

int main(void)
{
	char *s = "Hola";
	char (*f)(unsigned int, char);
	char *result;

	f = &ft_toupper_mapi;
	result = ft_strmapi(s, f);
	printf("s = %s\n", s);
	printf("result = %s\n", result);
	free(result);
	return (0);
}*/
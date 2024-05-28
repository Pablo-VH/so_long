/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:40:33 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:30:02 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i++;
	}
}

/*static void	ft_toupper_iteri(unsigned int i, char *c)
{
    if (c[i] >= 'a' && c[i] <= 'z')
        c[i] = c[i] - 'a' + 'A';
}

 int main(void)
 {
 	char s[] = "Hola";
 	void (*f) (unsigned int, char*);

	printf("s = %s\n", s);
 	f = &ft_toupper_iteri;
 	ft_striteri(s, f);
	printf("s = %s\n", s);
 	return (0);
 }*/
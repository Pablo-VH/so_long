/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:23:05 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/28 09:29:05 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tab;
	size_t			i;

	i = 0;
	tab = (unsigned char *)malloc(size * count);
	if (!tab)
		return (NULL);
	while (i < count * size)
		tab[i++] = '\0';
	return (tab);
}

/*int main(void) 
{
	//if(size != 0 && count > SIZE_MAX / size)
	//	return (NULL);
    // Ejemplo de uso de ft_calloc para asignar un array de 5 enteros
    size_t num_elements = 5;
    size_t element_size = sizeof(int);
    int *arr = (int *)ft_calloc(num_elements, element_size);

    if (arr != NULL) {
        // Imprimir los valores del array (deberían ser cero)
        printf("Valores del array: ");
        for (size_t i = 0; i < num_elements; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Liberar la memoria asignada
        free(arr);
    } else {
        printf("Error en la asignación de memoria.\n");
    }
    return (0);
}*/
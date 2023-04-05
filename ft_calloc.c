/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:46:16 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/05 17:26:36 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc (size_t n, size_t size)
{
void *elements;

elements = malloc(n * size);
if (elements == NULL)
	return (NULL);
ft_bzero(elements, n * size);
return (elements);
}
/*
int	main(void)
{
	//char *str; en caso de no querer hacer directo en el printf
	//str = ft_calloc (4, 10); en caso de no querer hacer directo en el printf
	printf("%s\n", ft_calloc (4, 10));
	printf("%s", calloc (4, 10));
	return(0);
}
*/
/*
Esta funcion lo que hace es reservar "n" posiciones en memoria de tamaño "size" cada una
(Para lo cual esta usando el malloc ) y las rellena de 0 (para lo cual esta usando el bzero).

Si falla la reserva de memoria cuando Malloc la solicita, el puntero se convierte en
NULL.

Una buena forma de testarlo es cambiando la funcion de bzero por '1' en lugar de 0 y ver como
devuelve ese número de '1', n * size veces.
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:31:02 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/05 18:40:34 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s2;

	i = start;
	j = 0;
	if (start > ft_strlen(s))
		return(ft_strdup("\0"));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	s2 =  malloc((len + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (s[i] != '\0' && j < len)
	{
		s2[j] = s[i];
		j++;
		i++;
	}
	s2[j] = '\0';
	return(s2);
}
/*
int	main(void)
{
	char	str [] = "Me duele la cara de ser tan guapo";
	int	start_pos_sub = 3;
	int	len_sub = 5;

	printf("%s", ft_substr(str, start_pos_sub, len_sub));
	return(0);
}
*/
/*
La función recibe un string "s" una posicion del mismo "start" y un numero de caracteres
 "len" del string desde el "start".

La función crea otro string "*s2" y reserva para el un espacion en memoria de ese len + 1 (Para
 poder incluir un '\0' al final) con malloc.

La funcion rellena el espacio reservado con los caracteres indicados en el primer paragrafo.

La funcion devuelve NULL si malloc falla en la reserva de memoria.
if (s2 == NULL)
		return (NULL);

En el caso de que la posicion de comienzo "star" sea mayor que el tamaño del string original s,
la funcion devuelve un string vacio.
if (start > ft_strlen(s))
		return(ft_strdup("\0"));

En el caso de que el len sea mayor que el numero de caracteres de s desde la posicion start,
la funcion devuelve un string s2 con los cacacteres que tenga hasta el final.
if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
*/




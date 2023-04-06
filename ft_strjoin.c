/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:10:36 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/06 21:31:27 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	char	*s3;

	i = 0;
	j = 0;
	s3 =  malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
/*
int	main(void)
{
	char	str1 [] = "Me duele la cara ";
	char	str2 [] = "de ser tan guapo";

	printf("%s", ft_strjoin(str1, str2));
	return(0);
}*/
/*
La funcion crea un string "s3" que rellena con el string "s1"
y a continuacion el string "s2".

Tras crear el string "s3" reserva un espacio de memoria, usando malloc,
 igual a la suma de la longitud de los dos strings "s1" y "s2" usando malloc.

La funcion devuelve NULL si malloc falla en la reserva de memoria.
if (s2 == NULL)
		return (NULL);
*/

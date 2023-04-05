/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:52:07 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/05 16:11:37 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
char *s2;
int	len;

len = ft_strlen (s1) + 1;
s2 = malloc(len * sizeof(char));
if(s2 == NULL)
	return(NULL);
ft_memcpy (s2, s1, len);
return (s2);
}
/*int	main(void)
{
char	str1 [] = "El Perro de San Roque";
char	str2 [] = "El Perro de San Roque";

printf("%s\n", ft_strdup(str1));
printf("%s\n", strdup(str2));
return (0);
}*/
/*
Esta funcion lo que hace es copiar el contenido de un puntero char *s1 en otro puntero char *s2
que crea reservandole en memoria el tamaño exacto del puntero char *s1 (usando malloc, despues de
haber calculado el tamaño de *s1).
A len le sumamos 1 porque el ft_strlen (s1) se queda una posicion antes que '\0'.
El sizeof(char) significa que tiene el tamaño de un char.
Si el puntero S2 es 0, o sea si el string s1 es 0, devuelve NULL.
*/

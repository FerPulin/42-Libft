/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:25:03 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/06 21:35:03 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *s2;
	int i;

	i = 0;
	s2 =  malloc((ft_strlen(s) + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		s2 [i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*char	ft_sub_strmapi(unsigned int n, char c)
{
	c = c + n;
	return (c);
}
char	zr2(unsigned int n, char c)
{
	c = c - n;
	return (c);
}
int	main(void)
{
	char	str [] = "abcdefghijklmn";
	printf("%s\n", ft_strmapi(str, ft_sub_strmapi));
	//printf("%s", ft_strmapi(str, zr2));
	return (0);
}*/
/*
Esta funcion recibe un string al que apunta un puntero char "*s"
y una función "char (*f)(unsigned int, char)" que se use para
determinar los valores a ser asignados a otro puntero "*s2" que
crea reservando para ella, mediante malloc, un tamaño de memoria
 igual al del string en el puntero "*s".

 Al llamar la funcion desde el main determinas el string "s" que
 va a usar y la funcion que queremos que se use para generar ese
 segundo string "s2", de tal forma que en un programa se puede usar
 con varias funciones.

 La funcion a la que se llama usara un char que es el del string s
 y un int que sera el valor del indice de ese puntero "*s" en el que
 esta ese char.

 La funcion devuelve NULL si malloc falla en la reserva de memoria.
if (s2 == NULL)
		return (NULL);
*/

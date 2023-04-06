/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:39:13 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/06 22:27:39 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}

}

/*
void	ft_sub_strmapi(unsigned int n, char* c)
{
	*c = *c + n;
}

int	main(void)
{
	char	str [] = "abcdefghijklmn";
	char	*p;
	p = ft_strdup(str);
	ft_striteri(p, ft_sub_strmapi);
	printf("%s\n", p);
	free(p);
	return (0);
}
*/
/*
Esta funcion recibe un string al que apunta un puntero char "*s"
y una función "char (*f)(unsigned int, char*)" que se use para
determinar los valores a ser asignados al puntero original "*s".

 Al llamar la funcion desde el main determinas el string "s" que
 va a usar y la funcion que queremos que se use para reemplazar es
 string "s".

 La funcion a la que se llama usara una posicion dentro de un puntero
  char para identificar el caracter  y un int que sera el valor del
  indice de ese puntero "*s" en el que esta ese caracter.
*/

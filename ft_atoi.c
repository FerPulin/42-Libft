/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:55:41 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/05 19:09:52 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int digit;

	i = 0;
	sign = 1;
	digit = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		digit = digit * 10;
		digit = digit + (str[i] - '0');
		i = i + 1;
	}
	return (digit * sign);
}
/*
int	main(void)
{
	char str[] = "-34567abc";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	return(0);
*/
/*
La funcion convierte un numeros en string en un int.

Basicamente recorre el string avanzando mientras se encuentran
caracteres 32 y entre 9 y 13 o signo +.

Si encuentra un simbolo negativo lo guarda para devolver el int
con ese signo.

Y cuando encuentra numeros entre el 0 y el 9, siempre y hasta el final
del string se aplica la formula que indica la funcion.
*/

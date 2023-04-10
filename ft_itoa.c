/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 02:21:26 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/10 15:02:00 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_convert(int n, int i, char *str);
static int	ft_len(int n);
char	*ft_itoa(int n);

static int	ft_len(int n)
{
	int	count;

	if (n < 1)
		count = 2;
	else
		count = 1;
	while(n != 0)
	{
		count = count + 1;
		n = n / 10;
	}
	return (count);
}
	char	*ft_itoa(int n)
{
	char	*str;
	int	i;
	int	len;

	len = ft_len(n);
	str = malloc(len * sizeof(char));
	if(str == NULL)
		return(NULL);
	i = len - 2;
	str[len - 1] = '\0';
	return(ft_convert(n, i, str));
}
static char *ft_convert(int n, int i, char *str)
{
	if (n == 0)
	{
		str[0] = 48;
		return(str);
	}
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
	}
	if(n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(123456));
    printf("%s\n", ft_itoa(-123456));
    printf("%s\n", ft_itoa(-2147483648));
}
*/
/*
Esta funcion recibe un int y crea un string con un tamaño suficiente
(usando Malloc) para guardar el int que nos dan convertido a char.

Genial la forma de la funcion que creamos para calcular el tamaño del
len ft_len.
*/

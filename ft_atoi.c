/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:55:41 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 12:59:37 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function converts numbers in a string pointed to by *str to an int,
returnning the int. Basically runs the string mooving fwd if it finds
character 32, "+" or characters between 9and 13. When finding a "-" character
it does keep it to return as part of the int, and when finding a number between
"0 and 9" it applies the formula indicated in the function.
Y cuando encuentra numeros entre el 0 y el 9, siempre y hasta el final
del string se aplica la formula que indica la funcion.
*/
#include "libft.h"

int		ft_atoi(const char *str);

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	digit;

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
	printf("the result of the ft_atoi function is: %d\n", ft_atoi(str));
	printf("The result of the atoi function is: %d", atoi(str));
	return(0);
*/

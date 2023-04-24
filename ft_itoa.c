/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 02:21:26 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 15:22:56 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function receives and int and creates an string with size enough, using
malloc, to keep the received int, converted into a char. The function returrns
that char. Proud of the way I mange to calculate the size of the length, ft_len.
*/

#include "libft.h"

static char	*ft_convert(int n, int i, char *str);
static int	ft_len(int n);
char		*ft_itoa(int n);

static int	ft_len(int n)
{
	int	count;

	if (n < 1)
		count = 2;
	else
		count = 1;
	while (n != 0)
	{
		count = count + 1;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;

	len = ft_len(n);
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = len - 2;
	str[len - 1] = '\0';
	return (ft_convert(n, i, str));
}

static char	*ft_convert(int n, int i, char *str)
{
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
	}
	if (n < 0)
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
	printf("The resul of ft_itoa for 0 is: %s\n", ft_itoa(0));
    printf("The result of ft_itoa for 123456 is: %s\n", ft_itoa(123456));
    printf("The result of ft_itoa for -123456 is: %s\n", ft_itoa(-123456));
    printf("The result of ft_itoa for -2147483648 is: %s\n",
	 ft_itoa(-2147483648));
}
*/

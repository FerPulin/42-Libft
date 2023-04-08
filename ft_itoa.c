/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 02:21:26 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/07 21:31:14 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_book(int n)
{
	char	*str;
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
	str = malloc(count * sizeof(char));
	if(s2 == NULL)
		return(NULL);
	return (*str)
}
	char	*ft_itoa(int n)
{
	ft_book(n);


	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		ft_itoa(147483648);
	}
	else if (n < 0)
	{
		str[0] = '-';
		n = -n;
		ft_itoa(n);
	}
	else if (n > 9)
	{
		ft_itoa(n / 10);
		str ((n % 10) + 48);
	}
	else
		 ft_putchar(n + 48);
}

int	main(void)
{
	int n = 2735;
	int	fd = open ("Archivo_salida_ft_putnbr.txt", O_WRONLY | O_CREAT, 0644);

	ft_itoa_fd(nb);
	return (0);


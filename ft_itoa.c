/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 02:21:26 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/07 17:37:17 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	str*;
	

	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_itoa(147483648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_itoa(nb);
	}
	else if (n > 9)
	{
		ft_itoa(n / 10);
		ft_putchar((n % 10) + 48);
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


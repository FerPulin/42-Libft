/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:55:41 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/03/28 21:39:58 by fpulin-v         ###   ########.fr       */
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
		digit = digit + str[i] - '0';
		i = i + 1;
	}
	return (digit * sign);
}
/*
int	main(void)
{
	printf("%d\n", atoi ("HolaCaracola"));
	printf("%d\n", ft_atoi ("HolaCaracola"));
	return (0);
}
*/

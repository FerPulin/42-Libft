/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:47:03 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 12:31:09 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function tests for an ASCII character, which is any character
between 0 and octal 0177 both inclusive, or 0 and 127 in decimal, both
inclisive.
*/
#include "libft.h"

int	ft_isascii(int c);

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("180 es un ASCII:? %d\n", ft_isascii(180));
	printf("180 es un ASCII:? %d\n", ft_isascii(180));
	printf("127 es un ASCII:? %d\n", isascii(127));
	printf("127 es un ASCII:? %d\n", ft_isascii(127));
}
*/

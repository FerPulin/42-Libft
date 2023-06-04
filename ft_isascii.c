/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:47:03 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/06/03 13:03:18 by fpulin-v         ###   ########.fr       */
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
	int a1 = 180
	int a2 = 127

	printf("c% is an ASCII? %d\n:", a1, ft_isascii(a1));
	printf("c% is an ASCII? %d\n:", a2, ft_isascii(a2));
	printf("c% is an ASCII? %d\n:", a1, isascii(a1));
	printf("c% is an ASCII? %d\n:", a2, isascii(a2));
	return(0)
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:22:42 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/06/03 13:17:05 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function tests for a printable character, which is any character
between 32 and 126 in decimal, both inclisive. If is printable returns
a non zero. If it is non printable, returns a zero.
*/
#include "libft.h"

int	ft_isprint(int c);

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int a1 = 127
	int a2 = 38

	printf("c% is printable? %d\n:", a1, ft_isprint(a1));
	printf("c% is printable? %d\n:", a2, ft_isprint(a2));
	printf("c% is printable? %d\n:", a1, isprint(a1));
	printf("c% is printable? %d\n:", a2, isprint(a2));
	return(0)
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:22:42 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 12:34:00 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function tests for a printable character, which is any character
between 32 and 126 in decimal, both inclisive.
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
	printf("127 is printable:? %d",ft_isprint(127));
	printf("127 is printable:? %d\n",isprint(127));
	printf("38 is printable:? %d",ft_isprint(38));
	printf("38 is printable:? %d\n",isprint(38));
}
*/

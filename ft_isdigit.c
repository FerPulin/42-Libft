/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:05:52 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 11:46:35 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function tests if the character sent is a decimal digit. If it is
returns a non 0, if it is not, returns a 0.
*/
#include "libft.h"

int	ft_isdigit(int c);

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	printf("4 is a decimal digit:? %d\n", ft_isdigit('4'));
	printf("A is a decimal digit:? %d\n", ft_isdigit('A'));
	printf("4 is a decimal digit:? %d\n", isdigit('4'));
	printf("A is a decimal digit:? %d\n", isdigit('A'));
}
*/

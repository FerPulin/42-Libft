/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:05:52 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/06/03 13:11:17 by fpulin-v         ###   ########.fr       */
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
	int a1 = '4'
	int a2 = 'A'

	printf("c% is a decimal? %d\n:", a1, ft_isdigit(a1));
	printf("c% is a decimal? %d\n:", a2, ft_isdigit(a2));
	printf("c% is a decimal? %d\n:", a1, isdigit(a1));
	printf("c% is a decimal? %d\n:", a2, isdigit(a2));
	return(0)
}
*/

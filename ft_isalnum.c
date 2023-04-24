/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:42:27 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 12:00:30 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function tests if the character sent is alpha or numeric. If it is
returns a non 0, if it is not, returns a 0.
*/
#include "libft.h"

int	ft_isalnum(int c);

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("; is alpha o numeric:? %d\n", ft_isalnum(';'));
	printf("A is alpha o numeric:? %d\n", ft_isalnum('A'));
	printf("; is alpha o numeric:? %d\n", isalnum(';'));
	printf("A is alpha o numeric:? %d\n", isalnum('A'));
}
*/

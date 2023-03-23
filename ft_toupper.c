/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:03:09 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/03/23 11:59:21 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int b)
{
	if (b >= 'a' && b <= 'z')
		return (b - 32);
	else
		return (b);
}
/*
int main(void)
{
	int c = 'A';
	int b = 'A';
	printf("%c\n", toupper(c));
	printf("%c", ft_toupper(b));
	return (0);
}
*/

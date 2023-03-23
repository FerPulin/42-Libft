/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:29:03 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/03/23 11:46:59 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_tolower(int b)
{
	if (b >= 'A' && b <= 'Z')
		return (b + 32);
	else
		return (b);
}
/*
int main(void)
{
	int c = 'b';
	int b = 'b';
	printf("%c\n", tolower(c));
	printf("%c", ft_tolower(b));
	return (0);
}
*/

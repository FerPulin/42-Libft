/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:03:09 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 12:02:39 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function coverts an small letter character into a capital letter
character.
*/
#include "libft.h"

int	ft_toupper(int b);

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
	printf("The function toupper result is: %c\n", toupper(c));
	printf("The function ft_toupper result is: %c", ft_toupper(b));
	return (0);
}
*/

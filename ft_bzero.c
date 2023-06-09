/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:37:00 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 12:28:50 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 The function writes n 0 bytes to the string s.
 If n is = 0, bzero() does nothing.
 */
#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main(void)
{
	char buffer[50];
	char buffer2[50];

	ft_bzero (buffer, 6);
	printf("The ft_bzero result is: %s\n", buffer);
	printf("The bzero result is: %s\n", bzero(buffer2, 6));
	return (0);
}
*/

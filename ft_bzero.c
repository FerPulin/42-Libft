/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:37:00 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/03/28 01:49:50 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main(void)
{
	char buffer[50];
	char buffer2[50];

	printf("%s\n", ft_bzero(buffer, 6));
	printf("%s\n", bzero(buffer2, 6));
	return (0);
}
*/

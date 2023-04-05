/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:37:00 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/05 14:32:42 by fpulin-v         ###   ########.fr       */
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

	ft_bzero (buffer, 6);
	printf("%s\n", buffer);
	printf("%s\n", bzero(buffer2, 6));
	return (0);
}
*/


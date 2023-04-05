/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:54:16 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/03/28 01:27:41 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *) s1;
	b = (char *) s2;
	while (i < n && a[i] == b[i])
		i++;
	if (i == n)
		return (0);
	return (((unsigned char) a[i]) - ((unsigned char) b[i]));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:32:03 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/03/15 19:49:44 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < (dstsize - 1))
	{
		dst[i] = src[i];
		i = i + 1;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char s1[25];
	printf("%lu",strlcpy(s1, "Caracola", 22));
	printf("\n%s\n", s1);
	char s2[25];
	printf("%lu",ft_strlcpy(s2, "Caracola", 22));
	printf("\n%s\n", s2);
	return(0);
}
*/

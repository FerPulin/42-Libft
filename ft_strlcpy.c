/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:32:03 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/04 18:57:08 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return(ft_strlen(src));
	while (i < (dstsize - 1) && src[i] != '\0')
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
	printf("%lu",strlcpy(s1, "Caracola", 4));
	printf("\n%s\n", s1);
	char s2[25];
	printf("%lu",ft_strlcpy(s2, "Caracola", 4));
	printf("\n%s\n", s2);
	return(0);
}
*/

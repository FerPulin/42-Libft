/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:32:03 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 12:06:47 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function copies the string pointed by *scr into into an string pointed
by *dst, taking as argument a maximum size of the dst string, to avoid memory
overflows. The dst string is always returned with a '\0' so
the full size of the destination buffer and guarantee room for the NUL should be
included in dstsize.
RETURNS: the total length of the string they tried to create (src).
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
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
	printf("The strlcpy result is: %lu",strlcpy(s1, "Caracola", 4));
	printf("\n%s\n", s1);
	char s2[25];
	printf("The ft_strlcpy result is: %lu",ft_strlcpy(s2, "Caracola", 4));
	printf("\n%s\n", s2);
	return(0);
}
*/

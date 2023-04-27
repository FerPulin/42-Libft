/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:50:15 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/25 11:25:52 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function concatenates two strings taking also as argument a maximum size
of the resulting string to make sure that there are not memory overflows. The
funtion takes the src string and concatenates after de dst string up to the
makimum size taken as argument dstsize -1, since there must be room for the
Null.
The resulting string will always end with an '\0' so it is important when
determining the maximum size. The function returns the size of resulting
string.
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_lon;
	size_t	src_lon;

	dst_lon = ft_strlen(dst);
	src_lon = ft_strlen(src);
	i = 0;
	j = dst_lon;
	if (dst_lon < dstsize -1 && dstsize > 0)
	{
		while (dst_lon + i < dstsize - 1)
		{
			dst [j] = src [i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dst_lon >= dstsize)
		dst_lon = dstsize;
	return (src_lon + dst_lon);
}
/*
int main(void)
{
	char dst [] = "pqrstuvwxyz";
	char scr [] = "abcd";
	char dst1 [] = "pqrstuvwxyz";
	char scr1 [] = "abcd";

	printf("The result of the ft_strlcat is: %lu\n", ft_strlcat(dst, scr, 20));
	printf("The concatenated string with ft_strlcat is: %s\n", dst);
	printf("The source string is: %s\n", scr);
	printf("The destination string string is: %s\n", dst);
	printf("The result of the srtcat is: %lu\n", strlcat(dst1 , scr1, 20));
	printf("The concatenated string with strlcat is: %s\n", dst1);
	printf("The source string is %s\n", scr1);
	printf("The destination string string is: %s\n", dst1);
}
*/

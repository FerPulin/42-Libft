/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:50:15 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/05/05 12:21:28 by fpulin-v         ###   ########.fr       */
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
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	j = dst_len;
	if (dst_len < dstsize -1 && dstsize > 0)
	{
		while (dst_len + i < dstsize - 1)
		{
			dst [j] = src [i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dst_len >= dstsize)
		dst_len = dstsize;
	return (src_len + dst_len);
}

int main(void)
{
	char dst [20] = "pqrstuvwxyz";
	char scr [] = "abcdefghijklmnop";
	char dst1 [20] = "pqrstuvwxyz";
	char scr1 [] = "abcdefghijklmnop";

	printf("The source string was: %s\n", scr);
	printf("The destination string was: %s\n", dst);
	printf("The result of the ft_strlcat is: %lu\n", ft_strlcat(dst, scr, sizeof(dst)));
	printf("The concatenated string with ft_strlcat is: %s\n", dst);
	printf("The source string was: %s\n", scr1);
	printf("The destination string string was: %s\n", dst1);
	printf("The result of the srtcat is: %lu\n", strlcat(dst1 , scr1, sizeof(dst)));
	printf("The concatenated string with strlcat is: %s\n", dst1);
}


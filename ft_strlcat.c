/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:50:15 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/03/17 17:34:53 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t dst_lon;
	size_t src_lon;
	
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
	return  (src_lon + dst_lon);
}


int main(void)
{
	char s1 [25] = "hola";
	char s2 [] = "caraco";
	char dst [25] = "hola";
	char scr [] = "caraco";

	printf("%lu\n", ft_strlcat(dst, scr, 25));
	printf("%s\n", dst);
	printf("%s\n", scr);
	printf("%lu\n", strlcat(s1 , s2, 25));
	printf("%s\n", s1);
	printf("%s\n", s2);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:53:51 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 12:33:32 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function copies "n" bytes from string pointed by *src
 to another memory block pointed by *dst, returning the
 value of *dst. And if src dst overlap,the result is unpredictable.
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (i < n)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst [] = "amigo";
	char	src [] = "mariano";
	char	dst1 [] = "amigo";
	char	src1 [] = "mariano";

	ft_memcpy(dst, src, 8);
	printf("The ft_memcpy function result is: %s\n", dst);
	memcpy(dst1, src1, 8);
	printf("The memcpy function result is:%s", dst1);
}
*/
/*
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *ds;
	char *or;

	ds = (char*) dst;
	or = (char*) src;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	while(i < n)
	{
		ds [i] = or [i];
		i++;
	}
	return(dst);
}
*/

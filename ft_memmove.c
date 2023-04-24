/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:53:57 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 22:01:23 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function copies "n" bytes from string pointed by *src to another memory
block pointed by *dst, returning the value of *dst. Very similar to memcopy
but more secure because it does guaranty the copy even if the memory blocks
overlap.
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	if (dst > src)
	{
		while (n > 0)
		{
			n = n - 1;
			((char *) dst)[n] = ((char *) src)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((char *) dst)[i] = ((char *) src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst [] = "mariano";
	char	src [] = "amigo";
	char	dst1 [] = "mariano";
	char	src1 [] = "amigo";

	ft_memmove(dst, src, 3);
	printf("The ft_memmove result is: %s\n", dst);
	memmove(dst1, src1, 3);
	printf("The memmove result is: %s\n", dst1);
}
*/
/*
The following is an step back of the function, getting the same
results.

void	*ft_memmove(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ds;
	char	*or;

	ds = (char *) dst;
	or = (char *) src;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	if (dst > src)
	{
		while (n > 0)
		{
			n = n - 1;
			ds [n] = or [n];
		}
	}
	else
	{
		while (i < n)
		{
			ds [i] = or [i];
			i++;
		}
	}
	return (dst);
}
*/
/*
int	main(void)
{
	char	dst [] = "mariano";
	char	src [] = "amigo";
	char	dst1 [] = "mariano";
	char	src1 [] = "amigo";

	ft_memmove(dst, src, 3);
	printf("The ft_memmove result is: %s\n", dst);
	memmove(dst1, src1, 3);
	printf("The memmove result is: %s\n", dst1);
}
*/

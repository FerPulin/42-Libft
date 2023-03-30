/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:53:51 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/03/27 23:41:34 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	while(i < n)
	{
		((unsigned char*) dst)[i] = ((unsigned char*) src)[i];
		i++;
	}
	return(dst);
}
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
/*
int	main(void)
{
	char	dst [] = "amigo";
	char	src [] = "mariano";
	char	dst1 [] = "amigo";
	char	src1 [] = "mariano";

	ft_memcpy(dst, src, 8);
	printf("%s\n", dst);
	memcpy(dst1, src1, 8);
	printf("%s", dst1);
}
*/

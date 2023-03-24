/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:53:51 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/03/24 17:35:20 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		((unsigned char*) dst)[i] = ((unsigned char*) src)[i];
		i++;
	}
	return(dst);
}
void	ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char* ds

	i = 0;
	while(i < n)
	{
		((unsigned char*) dst)[i] = ((unsigned char*) src)[i];
		i++;
	}
	return(dst);
}

int	main(void)
{
	char	dst [] = "mariano";
	char	src [] = "amigo";
	char	dst1 [] = "mariano";
	char	src1 [] = "amigo";

	ft_memcpy(dst, src, 4);
	printf("%s\n", dst);
	memcpy(dst1, src1, 4);
	printf("%s", dst1);
}

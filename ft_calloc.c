/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:46:16 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 13:17:06 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function books "n" positions in the memory with a size of "size" each.
In order to do that it uses malloc. And the function fills them with zeros
using bzero. If the memory booking failes when Malloc requests, the pointers
converts in NULL
Good way to test is changing the function bzero to fill it with '1' insted
of zero, and you will get the number '1', n * size times.
*/

#include"libft.h"

void	*ft_calloc(size_t n, size_t size);

void	*ft_calloc(size_t n, size_t size)
{
	void	*elements;

	elements = malloc(n * size);
	if (elements == NULL)
		return (NULL);
	ft_bzero(elements, n * size);
	return (elements);
}
/*
int	main(void)
{
	//char *str; en caso de no querer hacer directo en el printf
	//str = ft_calloc (4, 10); en caso de no querer hacer directo en el printf
	printf("The result of ft_calloc is: %s\n", ft_calloc (4, 10));
	printf("The result of calloc is: %s", calloc (4, 10));
	return(0);
}
*/

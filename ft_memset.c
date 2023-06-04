/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:35:53 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/06/03 11:38:33 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
     The function writes "n" bytes of value "c" (converted to an
	 unsigned char) to the string "s", and returns its first argument.
*/
#include"libft.h"

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char buffer[50];
	char buffer2[50];

	printf("%s\n", memset(buffer, '8', 6));
	printf("%s\n", ft_memset(buffer2, '8', 6));
	return (0);
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	car;
	size_t	i;

	i = 0;
	str = (unsigned char*) s;
	car = (unsigned char) c;
	while (i < n)
	{
		str[i] = car;
		i++;
	}
	return (str);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:54:26 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/03/28 01:18:27 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	size_t	i;
	unsigned char	car;

	i = 0;
	car = c;
	p = (char *) s;
	while (i < n)
	{
		if ((unsigned char) p[i] == car)
			return ((char *) &p[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = " gorgorito \0lapreduzo";
	printf("%s\n", ft_memchr(str,'o', 4));

}
*/

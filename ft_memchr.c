/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:54:26 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 21:31:12 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function searches for the first occurrence of c (converted to an unsigned
char) in a memory block pointed by *s, up to n number of bytes. The function
returns a pointer to the byte in the memory block where the character is located
or Null if such a character dos not exist.
*/

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*p;
	size_t			i;
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
	char str[] = "Hola caracola";
	char *ptr1;
	char *ptr2;
	ptr1 = ft_memchr(str, 'c', 10);
	ptr2 = memchr(str, 'c', 10);
	printf("The ft_memchr found the character at post (null if -): %ld.\n",
		ptr1 - str);
	printf("The memchr found the character at posit (null if-): %ld.\n",
		ptr2 - str);
	return(0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:54:16 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 11:48:53 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function compares byte string s1 against byte string s2. Both strings are
assumed to be n bytes long. The function returns zero if the two strings are
identical, otherwise returns the difference between the first different bytes
(treated as unsigned char values). Zero-length strings are always identical.
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *) s1;
	b = (char *) s2;
	while (i < n && a[i] == b[i])
		i++;
	if (i == n)
		return (0);
	return (((unsigned char) a[i]) - ((unsigned char) b[i]));
}
/*
int main()
{
	char s1[] = "Macanudo";
	char s2[] = "Macanudo";
	int result1 = ft_memcmp(s1, s2, strlen(s1) + 1);
	int result2 = memcmp(s1, s2, strlen(s1) + 1);

	printf("The ft_memcmp function result comparing s1 and s2 is: %d\n", result1);
    printf("The memcmp function result comparing s1 and s2 is %d\n", result2);
    return 0;
}
*/

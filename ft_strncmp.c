/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:03:10 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 21:34:31 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function compares the first n characters of two strings pointed by *str1
and *str2. If all n characters are the same, the functions returns 0. If any
of the n characters are different, the function will retur a positive number
if adding the characters of the string pointed by *str1 result in a number
bigger than the ones in the string pointed by *str2, or negative if the
oposite. Characters afer '\0' character, are not compared.
*/

#include"libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n);

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (str1 [i] || str2 [i]))
	{
		if (str1 [i] != str2 [i])
			return ((unsigned char) str1 [i] - (unsigned char) str2 [i]);
	i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("The result of strncmp is: %d\n", strncmp( "Hola",
	 "Holacfgyny", 4));
	printf("The result of ft_strncmp is: %d\n", ft_strncmp( "Hola",
	 "Holacfgyny", 4));
	return (0);
}
*/

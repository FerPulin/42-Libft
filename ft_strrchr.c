/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:40:07 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 13:20:56 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function locates the first occurrence of z (converted to a char) in the
string pointed to by *str, starting to search from the end of the string. The
function returns a pointer to the located character or a NULL if the character
does not appear in the string.

The null character is considered to be part of the string; therefore if c is
`\0',the functions will point to`\0'.
*/
#include"libft.h"

char	*ft_strrchr(const char *str, int z);

char	*ft_strrchr(const char *str, int z)
{
	int	i;

	i = (ft_strlen (str));
	while (i >= 0)
	{
		if (str[i] == (char) z)
		{
			return ((char *) str + i);
		}
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str []= "caricatura roja";
	char	*result1 = ft_strrchr(str, '\0');
	char	*result2 = strrchr(str, '\0');

	printf("The result of ft_strrchr is a pointer to: %ld\n", result1 - str);
	printf("The result of strrchr is a pointer to: %ld\n", result2 - str);
	return (0);
}
*/

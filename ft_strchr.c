/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:27:47 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 13:08:35 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function locates the first occurrence of z (converted to a char) in the
string pointed to by *str, statring to search from the beginning of the string.
 The function returns a pointer to the located character, or NULL if the
 character does not appear in the string.
*/
#include "libft.h"

char	*ft_strchr(const char *str, int z);

char	*ft_strchr(const char *str, int z)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char) z)
			return ((char *) str + i);
		i++;
	}
	if ((unsigned char) z == '\0')
		return ((char *) str + i);
	return (NULL);
}
/*
int	main(void)
{
	const char	str []= "caricatura roja";
	char	*result1 = ft_strchr(str, 'r');
	char	*result2 = strchr(str, 'r');

	printf("The result of ft_strchr is a pointer to: %ld\n", result1 - str);
	printf("The result of strchr is a pointer to: %ld\n", result2 - str);
	return (0);
}
*/

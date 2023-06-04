/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:52:07 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/06/04 19:23:44 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function copies the content of a pointer *s1 into another pointer char *s2
that it is created booking in the memory the exact size of the original string
pointed by *s1. The function returns s2. (The function does this  using malloc
after having calculated the *s1 size).If the *s1 is 0 the function returns NULL.
We add 1 to len because the ft_srtlen function that we use just goes up to one
position before the end of the string '\0'. When we use the term sizeof(char)
it means that has the size of one char,that it is 1 byte, if we were going
to say  sizeof(char*) it would mean 8 bytes that is the size of a char pointer.
When using malloc, n is the number of characters and size is the number of
bytes that we want it to reserve for each character.
*/

#include "libft.h"

char	*ft_strdup(const char *s1);

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;

	len = ft_strlen (s1) + 1;
	s2 = malloc(len * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	ft_memcpy (s2, s1, len);
	return (s2);
}
/*
int	main(void)
{
	char	str1 [] = "El Perro de San Roque";
	char	str2 [] = "El Perro de San Roque";

	printf("The result of the ft_strdup is: %s\n", ft_strdup(str1));
	printf("The result of strdup is: %s\n", strdup(str2));
	return (0);
}
*/

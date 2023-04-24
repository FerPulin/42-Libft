/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:31:02 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 21:28:58 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function receives a pointer to an string "*s" and a position of the string
 "star" and the numberof characters "len" of the string from position "star".
 The function creates another string pointed by "*s2" and using malloc it books
 for it space in the memory equal to "len" + 1 (to have space to include '\0'
 in the end) The function fills the book space with the of the original string
from positio "star" and length "len". The function returns s2. The function
returns NULL if malloc fails booking memory.
If the "star" possition is greater than s size, the function returns an empty
string.
if (start > ft_strlen(s))
		return(ft_strdup("\0"));
If "len" is greater than the s number of characters from "start" the functions
returns s2 with all characters in s from "start".
if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s2;

	i = start;
	j = 0;
	if (start > ft_strlen(s))
		return (ft_strdup("\0"));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	s2 = malloc((len + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (s[i] != '\0' && j < len)
	{
		s2[j] = s[i];
		j++;
		i++;
	}
	s2[j] = '\0';
	return (s2);
}
/*
int	main(void)
{
	char	str [] = "Me duele la cara de ser tan guapo";
	int	start_pos_sub = 3;
	int	len_sub = 5;
	printf("The result of ft_substr is: %s", ft_substr(str, start_pos_sub,
		len_sub));
	return(0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:53:26 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 12:47:24 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function eliminates of the string pointed by "*set" starting from the
beginning and end of "s1" till finding a character not included in the string
"set". The function returns the resulting string with memory booked by using
malloc. The function returns Null if the memory booking failes.
*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	len = ft_strlen((char *) s1);
	while (ft_strchr(set, s1[len]) && len != 0)
		len--;
	return (ft_substr((char *)s1, 0, len + 1));
}
/*

int main(void)
{
    char *s1 = "%&Holaa&&&CaralolaH%&";
    char *set = "%&";
    char *str = ft_strtrim(s1, set);

    printf("The result of the ft_strtrim is: %s\n", str);
    return 0;
}
*/

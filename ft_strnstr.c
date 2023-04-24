/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:26:09 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 11:55:55 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function locates the first ocurrece of the substring "to_find" within the
first "len" positions of the string "str". It runs the string till the position
"len" and if is in full, it returns a pointer to the first ocurrece. If "to find"
is empty it returns "str". If it does not find the sub-string it returns NULL.
*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len);

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (len == 0 && (str == NULL || to_find == NULL))
		return (NULL);
	if (to_find[0] == '\0')
		return ((char *) str);
	i = 0;
	while (str[i] != '\0' && (size_t)i < len)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while ((i + j < len) && (str[i + j] == to_find[j]))
			{
				if (to_find[j + 1] == '\0')
					return ((char *) &str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	const char *str = "Me duele la cara de ser tan guapo";
	const char *to_find = "du";
	size_t len = 20;
	char *pos1 = ft_strnstr(str, to_find, len);
	char *pos2 = ft_strnstr(str, to_find, len);

	if (pos1 != 0 || pos2 !=0)
	{
        printf("ft_strnstr: The substring starts in %ld\n", pos1 - str);
		printf("strnstr: The substring starts in %ld\n", pos2 - str);
    }
    else
    {
        printf("Could not find '%s' in '%s'\n", to_find, str);
    }
    return (0);
}
*/

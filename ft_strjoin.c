/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:10:36 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 14:32:01 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function cerates an string "s3" and fill its with string "s1" followed
by string "s2". When creating "s3", the function books space in the memory,
using malloc, with a length equal to the sum of the "s1" and "s2" length.
The function returns the string s3. The function returns NULL is malloc
failes booking the memory required.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s3;

	i = 0;
	j = 0;
	s3 = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
/*
int	main(void)
{
	char	str1 [] = "Me duele la cara ";
	char	str2 [] = "de ser tan guapo";

	printf("The result of the ft_strjoin is: %s", ft_strjoin(str1, str2));
	return(0);
}
*/

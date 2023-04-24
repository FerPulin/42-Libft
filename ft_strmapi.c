/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:25:03 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 21:24:46 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function receives an string pointed by char "*s" and also receives a
function "char (*f) (Unsigned int, char)" that is used to determine the
values to be asigned to other string pointer by "*s2" that is created
booking, with malloc, a memory space with the same size as the string
pointed by "*s". The function returns "s2".

The string "s" and the function to be used to generate that second string
"s2" is determined in the main. The function will use that "s" string and an
int that will be the index value of the pointer "*s" where is that string.

If Malloc failes booking the memory required, the function returns NULL
if (s2 == NULL)
		return (NULL);
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	int		i;

	i = 0;
	s2 = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		s2 [i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
char	ft_sub_strmapi(unsigned int n, char c)
{
	c = c + n;
	return (c);
}
int	main(void)
{
	char	str [] = "abcdefghijklmn";
	printf("The result of ft_strmapi with ft_sub_strmapi for
	abcdefghijklmn is: %s\n", ft_strmapi(str, ft_sub_strmapi));
	return (0);
}
*/
/*
char	zr2(unsigned int n, char c)
{
	c = c - n;
	return (c);
}

int	main(void)
{
	char	str [] = "abcdefghijklmn";
	printf("The result of ft_strmapi with zr2 for abcdefghijklmn is: %s\n",
	 ft_strmapi(str, zr2));
	return (0);
}
*/

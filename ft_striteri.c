/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:39:13 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 12:28:19 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function receives an string pointed by char "*s" and also receives a
function "char (*f) (Unsigned int, char*)" that is used to determine the
values to be asigned to the original pointer "*s", replacing the previous
values. The function returns "s".

The string "s" and the function to be used to replace its values it is
determined in the main. The function called will use a position whitin
the  "*s" pointer to identify the character and an int that will be the
index value of the pointer "*s" where is that character.
*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void	ft_sub_strmapi(unsigned int n, char* c)
{
	*c = *c + n;
}

int	main(void)
{
	char	str [] = "abcdefghijklmn";
	char	*p;
	p = ft_strdup(str);
	ft_striteri(p, ft_sub_strmapi);
	printf("The result of ft_striteri for abcdefghijklmn is: %s\n", p);
	free(p);
	return (0);
}
*/

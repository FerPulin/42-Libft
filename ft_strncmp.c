/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:03:10 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/03/23 17:26:18 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
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
	printf("%d\n", strncmp( "Hola", "Holccfgyny", 5));
	printf("%d", ft_strncmp( "Hola", "Holccfgyny", 5));
	return (0);
}
*/

/*
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1 [i] == str2 [i] && i - 1 < n)
		i++;
	if ((str1 [i] - str2 [i]) > 0)
		return (1);
	else if ((str1 [i] - str2 [i]) < 0)
		return (-1);
	else
		return (0);

	size_t i;
*/

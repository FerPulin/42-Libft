/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:00:44 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 13:05:02 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function computes the length of a string. It returns the number of
characters up to one before the terminating NULL character '\0'. So not
counting that character in the number that does return.
*/
#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i = i + 1;
	return (i);
}
/*
int main(void)
{
	printf("ft_strlen for Oligarquico is: %lu\n",ft_strlen("Oligarquico"));
	printf("strlen for Oligarquico is": %lu\n",strlen("Oligarquico"));
}
*/

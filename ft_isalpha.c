/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:15:03 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 12:36:08 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function test if the character sent is alpabetic, either in
lower or uppper cases. If it is returns a non 0. If it is not, it does
return a 0.
*/
#include "libft.h"

int	ft_isalpha(int str);

int	ft_isalpha(int str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}
/*
int main(void)
{
    int a1 = 'l';
    int a2 = 'M';
    int a3 = '$';

    printf("%c is alpha:? %d\n", a1, ft_isalpha(a1));
    printf("%c is alpha:? %d\n", a2, ft_isalpha(a2));
    printf("%c is alpha:? %d\n", a3, ft_isalpha(a3));
    printf("%c is alpha:? %d\n", a1, isalpha(a1));
    printf("%c is alpha:? %d\n", a2, isalpha(a2));
    printf("%c is alpha:? %d\n", a3, isalpha(a3));

    return (0);
}
*/

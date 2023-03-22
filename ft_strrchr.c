/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:40:07 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/03/21 21:35:48 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

char	*ft_strrchr(const char *str, int z)
{
	int i;

	i = (ft_strlen(str));
	while (i >= 0)
	{
		if (str[i] == (char) z)
		{
			return((char*) str + i);
		}
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = " gorgorito \0lapreduzo";

	printf("%s\n", ft_strrchr(str,'\0'));
	printf("%s\n", strrchr(str,'\0'));

}
*/

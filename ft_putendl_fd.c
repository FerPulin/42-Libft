/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:59:09 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 21:33:27 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function writes an string and a line break in a file. The function recieves
the string pointed by "char *s" and the file with the "int fd".

In main we are creating or opening the file, giving autorization, calling the
function and closing the file afterwards.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
/*
int	main(void)
{
	char	str[] = "Hola Caracola";
	int	fd = open ("Archivo_salida_string_end_line_test.txt",
		O_WRONLY | O_CREAT, 0644);
	ft_putendl_fd(str, fd);
	close (fd);
	return (0);
}
*/

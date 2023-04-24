/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:13:49 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 12:39:01 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function writes a character in a file. The function recieves the character
"char c" and the file with the "int fd". The function does this and end ups
pointing to the following position.

In main we are creating or opening the file, giving autorization, calling the
function and closing the file afterwards.
*/

#include"libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int	main(void)
{
	char str[] = "Hola Caracola";
	int fd = open("archivo_salida_test.txt", O_WRONLY | O_CREAT, 0644);
	ft_putchar_fd(str[0], fd);
	ft_putchar_fd(str[1], fd);
	close (fd);
	return (0);
}
*/

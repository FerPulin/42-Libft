/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:13:49 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/05 13:20:43 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

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
/*
Esta funcion lo que hace es escribir en un fichero un caracter. El caracter me lo indica
char c y el fichero se indica con el int fd.
Hace esto y apunta a la siguiente posición.
En el main estamos creando o abriendo el fichero, dandole autorizaciones, llamando la
función y cerrando despues el fichero.
*/

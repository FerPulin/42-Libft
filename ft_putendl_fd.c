/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:59:09 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/05 14:17:20 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_putendl_fd(char *s, int fd)
{
	int i;
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
	int	fd = open ("Archivo_salida_string_end_line_test.txt", O_WRONLY | O_CREAT, 0644);
	ft_putendl_fd(str, fd);
	close (fd);
	return (0);
}
*/
/*
Esta funcion lo que hace es escribir en un fichero un string. El string me lo indica
char *s y el fichero se indica con el int fd. Y a continuación un salto de linea.
En el main estamos creando o abriendo el fichero, dandole autorizaciones, llamando la
función y cerrando despues el fichero.
*/

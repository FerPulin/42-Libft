/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:23:08 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/05 13:58:12 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Hola Caracola";
	int	fd = open ("Archivo_salida_string_test.txt", O_WRONLY | O_CREAT, 0644);
	ft_putstr_fd(str, fd);
	close (fd);
	return (0);
}
*/
/*
Esta funcion lo que hace es escribir en un fichero un string. El string me lo indica
char *s y el fichero se indica con el int fd.
En el main estamos creando o abriendo el fichero, dandole autorizaciones, llamando la
función y cerrando despues el fichero.
*/

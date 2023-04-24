/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:42:57 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/04/24 13:05:29 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function converts a given int "nb" into a char that is written inside a
given file "fd". In this version we call ft_putchar_fd to include the resulting
char in the file.
*/

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd);

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + 48, fd);
	}
	else
		ft_putchar_fd(nb + 48, fd);
}
/*
int	main(void)
{
	int nb = 2735;
	int	fd = open ("Archivo_salida_ft_putnbr.txt", O_WRONLY | O_CREAT, 0644);

	ft_putnbr_fd(nb, fd);
	return (0);
}
*/
/*
The following is a version of the function including the file writting
without the need to call ft_putchar_fd. (work in progress).

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		c = (nb % 10) + 48;
		write(fd, &c, 1);
	}
	else
	{
		c = nb + 48;
		write(fd, &c, 1);
	}
}

int	main(void)
{
	int n = -2147483648;
	int	fd = open ("Archivo_salida_ft_putnbr.txt", O_WRONLY | O_CREAT, 0644);

	ft_putnbr_fd(n, fd);
	return (0);
}
*/

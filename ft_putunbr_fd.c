/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putunbr_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 12:45:59 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/01/04 13:54:53 by Jorien        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr_fd(unsigned int n, int fd)
{
	int	out;

	out = 0;
	if (n == 0)
		return (write(fd, "0", 1));
	else if (n > 9)
		out += ft_putunbr_fd(n / 10, fd);
	return (out + ft_putchar_fd((n % 10) + 48, fd));
}

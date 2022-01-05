/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 11:27:37 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/01/04 13:52:49 by Jorien        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_choose(const char *fmt, int counter, va_list ap, int out)
{
	if (fmt[counter + 1] == 'c')
		return (ft_putchar_fd(va_arg(ap, int), 1));
	else if (fmt[counter + 1] == '%')
		return (ft_putchar_fd('%', 1));
	else if (fmt[counter + 1] == 's')
	{
		out = ft_putstr_fd(va_arg(ap, char *), 1);
		if (out == -1)
			return (ft_putstr_fd("(null)", 1));
		return (out);
	}
	else if (fmt[counter + 1] == 'd' || fmt[counter + 1] == 'i')
		return (ft_putnbr_fd(va_arg(ap, int), 1));
	else if (fmt[counter + 1] == 'u')
		return (ft_putunbr_fd(va_arg(ap, unsigned int), 1));
	else if (fmt[counter + 1] == 'x')
		return (ft_puthex_fd(va_arg(ap, unsigned int), 0, 1));
	else if (fmt[counter + 1] == 'X')
		return (ft_puthex_fd(va_arg(ap, unsigned int), 1, 1));
	else if (fmt[counter + 1] == 'p')
	{
		ft_putstr_fd("0x", 1);
		return (2 + ft_puthex_fd(va_arg(ap, unsigned long), 0, 1));
	}
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		counter;
	int		totalcount;
	int		quotecounter;

	counter = 0;
	totalcount = 0;
	quotecounter = 0;
	va_start(ap, fmt);
	while (fmt[counter])
	{
		if (fmt[counter] != '%')
			totalcount += ft_putchar_fd(fmt[counter], 1);
		else
		{
			totalcount += ft_choose(fmt, counter, ap, 0);
			counter++;
		}
		counter++;
	}
	return (totalcount);
}

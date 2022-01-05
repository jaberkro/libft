/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/26 16:34:01 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/12/08 13:15:12 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill(char *out, int n, int counter)
{
	if (n == 0)
		out[0] = '0';
	if (n == -2147483648)
	{
		out[10] = '8';
		n /= 10;
		counter--;
	}
	if (n < 0)
	{
		out[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		out[counter - 1] = n % 10 + '0';
		counter--;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*out;
	int		counter;

	counter = ft_intlen(n);
	out = ft_calloc(counter + 1, 1);
	if (out == NULL)
		return (NULL);
	ft_fill(out, n, counter);
	return (out);
}

/* Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
 */
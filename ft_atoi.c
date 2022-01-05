/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 19:32:16 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/01/04 18:33:16 by Jorien        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	out;
	int	counter;

	sign = 1;
	out = 0;
	counter = 0;
	while (ft_isspace(str[counter]))
		counter++;
	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			sign = -1;
		counter++;
	}
	while (ft_isdigit(str[counter]))
	{
		out = out * 10 + str[counter] - 48;
		counter++;
	}
	return (out * sign);
}

/* The atoi() function converts the initial portion of the string pointed to
     by str to int representation.
 */
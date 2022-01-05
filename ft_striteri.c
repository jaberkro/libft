/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/27 13:32:07 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/01/03 13:48:16 by Jorien        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	counter;

	counter = 0;
	if (!s)
		return ;
	while (s[counter])
	{
		f(counter, &(s[counter]));
		counter++;
	}
}

/* Applies the function f to each character of the
string passed as argument, and passing its index
as first argument. Each character is passed by
address to f to be modified if necessary
 */
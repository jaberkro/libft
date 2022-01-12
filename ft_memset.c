/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 20:36:21 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/01/12 12:05:39 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	size_t	counter;

	counter = 0;
	while (counter < len)
	{
		((unsigned char *)b)[counter] = (unsigned char)c;
		counter++;
	}
	return ((void *)(b));
}

/*  The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string b.
	 The memset() function returns its first argument.
*/
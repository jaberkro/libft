/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 11:38:26 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/10/22 15:04:53 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*input;
	size_t			counter;

	counter = 0;
	input = (unsigned char *)s;
	while (counter < n)
	{
		if (input[counter] == (unsigned char)c)
			return ((void *)(input + counter));
		counter++;
	}
	return (0);
}

/* The memchr() function locates the first occurrence of c 
	(converted to an unsigned char) in string s.
    The memchr() function returns a pointer to the byte 
	located, or NULL if no such byte exists within n bytes.
*/
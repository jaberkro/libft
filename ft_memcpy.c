/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 20:50:02 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/10/18 21:01:04 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	counter;

	counter = 0;
	if (!(dst == NULL && src == NULL))
	{
		while (counter < n)
		{
			((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
			counter++;
		}
	}
	return (dst);
}

/* The memcpy() function copies n bytes from memory area src to memory area
    dst.  If dst and src overlap, behavior is undefined.  Applications in
    which dst and src might overlap should use memmove(3) instead.
	The memcpy() function returns the original value of dst.
 */
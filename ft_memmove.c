/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 21:27:06 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/10/18 22:17:13 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	counter;

	counter = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	if ((unsigned char *)dst <= (unsigned char *)src)
	{
		while (counter < len)
		{
			((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
			counter++;
		}	
	}
	else
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dst);
}

/*  The memmove() function copies len bytes from string src to string dst.
     The two strings may overlap; the copy is always done in a non-destructive
     manner.
	 The memmove() function returns the original value of dst.
 */
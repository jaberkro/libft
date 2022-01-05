/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 15:21:46 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/10/22 15:37:22 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/* The memcmp() function compares byte string s1 against byte string s2.  Both
    strings are assumed to be n bytes long.
 	The memcmp() function returns zero if the two strings are identical, other-
    wise returns the difference between the first two differing bytes (treated
    as unsigned char values, so that `\200' is greater than `\0', for example).
    Zero-length strings are always identical.  This behavior is not required by
    C and portable code should only depend on the sign of the returned value.
 */
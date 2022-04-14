/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 15:56:03 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/04/14 12:32:04 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && c1[i] == c2[i] && c1[i])
		i++;
	return (c1[i] - c2[i]);
}

/* The strcmp() and strncmp() functions lexicographically compare the null-
     terminated strings s1 and s2. 
	 The strncmp() function compares not more than n characters.  Because
     strncmp() is designed for comparing strings rather than binary data, char-
     acters that appear after a `\0' character are not compared.
	 
	 The strcmp() and strncmp() functions return an integer greater than, equal
     to, or less than 0, according as the string s1 is greater than, equal to,
     or less than the string s2.  The comparison is done using unsigned charac-
     ters, so that `\200' is greater than `\0'. */

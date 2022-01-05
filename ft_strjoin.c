/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 20:59:15 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/01/05 10:54:26 by Jorien        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*out;	

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	out = malloc(len + 1);
	if (out == NULL)
		return (NULL);
	while (*s1)
	{
		*out = *s1;
		out++;
		s1++;
	}
	while (*s2)
	{
		*out = *s2;
		out++;
		s2++;
	}
	*out = '\0';
	return (out - len);
}

/* Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.

This function does not free s1, you have to handle that yourself.
 */
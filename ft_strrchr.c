/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 11:49:39 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/10/22 15:53:29 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (*s == '\0' && (unsigned char)c == '\0')
		return ((char *)s);
	s += len - 1;
	if ((unsigned char)c == '\0')
		return ((char *)s + 1);
	while (len)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s--;
		len--;
	}
	return (NULL);
}

/*  The strchr() function locates the first occurrence of c (converted to a
    char) in the string pointed to by s.  The terminating null character is
    considered to be part of the string; therefore if c is `\0', the functions
    locate the terminating `\0'.
	The strrchr() function is identical to strchr(), except it locates the last
    occurrence of c.
	The functions strchr() and strrchr() return a pointer to the located char-
    acter, or NULL if the character does not appear in the string.
*/
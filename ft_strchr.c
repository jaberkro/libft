/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 11:39:44 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/10/22 15:52:50 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (0);
}

/*  The strchr() function locates the first occurrence of c (converted to a
    char) in the string pointed to by s.  The terminating null character is
    considered to be part of the string; therefore if c is `\0', the functions
    locate the terminating `\0'.
	The functions strchr() and strrchr() return a pointer to the located char-
    acter, or NULL if the character does not appear in the string.
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 20:04:50 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/12/01 13:07:18 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*out;
	int		len;

	len = ft_strlen(s1);
	out = malloc(len + 1);
	if (out == NULL)
		return (NULL);
	ft_strlcpy(out, s1, len + 1);
	return (out);
}

/* The strdup() function allocates sufficient memory for a copy of the string
     s1, does the copy, and returns a pointer to it.  The pointer may subse-
     quently be used as an argument to the function free(3).
	 If insufficient memory is available, NULL is returned and errno is set to
     ENOMEM.
 */
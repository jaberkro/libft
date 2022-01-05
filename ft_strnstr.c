/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 17:57:04 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/10/22 18:48:59 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0' || len < 0)
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		i = 0;
		while (haystack[i] == needle[i] && haystack[i] && i < len)
		{
			i++;
		}
		if (i == ft_strlen(needle))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

/* The strnstr() function locates the first occurrence of the null-terminated
	string needle in the string haystack, where not more than len characters
	are searched.  Characters that appear after a `\0' character are not
	searched.  Since the strnstr() function is a FreeBSD specific API, it
	should only be used when portability is not a concern. 
	
	If needle is an empty string, haystack is returned; if needle occurs
	nowhere in haystack, NULL is returned; otherwise a pointer to the first
	character of the first occurrence of needle is returned. */
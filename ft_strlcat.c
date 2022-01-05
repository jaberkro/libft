/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 16:25:52 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/11/28 13:46:56 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	start;
	size_t	len;

	counter = 0;
	len = ft_strlen(src);
	start = ft_strlen(dst);
	if (start == dstsize)
		return (start + len);
	if (start > dstsize)
		return (len + dstsize);
	if (dstsize == 0)
		return (len);
	while (counter < dstsize - start - 1 && src[counter])
	{
		dst[start + counter] = src[counter];
		counter++;
	}
	dst[start + counter] = '\0';
	return (start + len);
}

/* strlcpy() and strlcat() take the full size of the destination buffer and
	guarantee NUL-termination if there is room.  Note that room for the NUL
	should be included in dstsize.

	strlcat() appends string src to the end of dst.  It will append at most
	dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
	dstsize is 0 or the original dst string was longer than dstsize (in prac-
	tice this should not happen as it means that either dstsize is incorrect or
	that dst is not a proper string).

	If the src and dst strings overlap, the behavior is undefined.

	Like snprintf(3), the strlcpy() and strlcat() functions return the total
	length of the string they tried to create.  For strlcpy() that means the
	length of src.  For strlcat() that means the initial length of dst plus the
	length of src.

	If the return value is >= dstsize, the output string has been truncated.
	It is the caller's responsibility to handle this.
*/
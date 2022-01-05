/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 21:50:41 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/11/28 13:50:07 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	len;

	counter = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (counter < dstsize - 1 && src[counter])
	{
		dst[counter] = src[counter];
		counter++;
	}
	if (dstsize != 0)
		dst[counter] = '\0';
	return (len);
}

/*   strlcpy() and strlcat() take the full size of
	 the destination buffer and guarantee NUL-ter-
	 mination if there is room.  Note that room
	 for the NUL should be included in dstsize.

	 strlcpy() copies up to dstsize - 1 characters
	 from the string src to dst, NUL-terminating
	 the result if dstsize is not 0.

	 Like snprintf(3), the strlcpy() and strlcat()
	 functions return the total length of the
	 string they tried to create.  For strlcpy()
	 that means the length of src.  For strlcat()
	 that means the initial length of dst plus the
	 length of src.

	 If the return value is >= dstsize, the output
	 string has been truncated.  It is the
	 caller's responsibility to handle this.
 */
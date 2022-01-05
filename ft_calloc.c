/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 17:38:56 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/12/01 13:08:44 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*out;

	out = malloc(count * size);
	if (out == NULL)
		return (NULL);
	ft_memset(out, 0, size * count);
	return (out);
}

/* The calloc() function contiguously allocates enough space for count objects
	that are size bytes of memory each and returns a pointer to the allocated
	memory.  The allocated memory is filled with bytes of value zero.
	If successful, calloc(), malloc(), realloc(), reallocf(), and valloc()
	functions return a pointer to allocated memory.  If there is an error, they
	return a NULL pointer and set errno to ENOMEM.
 */
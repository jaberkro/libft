/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/26 17:26:27 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/12/01 13:07:59 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		counter;
	char	*out;

	counter = 0;
	if (s == NULL)
		return (NULL);
	out = ft_calloc(ft_strlen(s) + 1, 1);
	if (out == NULL)
		return (NULL);
	while (s[counter])
	{
		out[counter] = f(counter, s[counter]);
		counter++;
	}
	return (out);
}

/* Applies the function ’f’ to each character of
the string ’s’ , and passing its index as first
argument to create a new string (with malloc(3))
resulting from successive applications of ’f’.
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 15:45:16 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/10/22 18:07:45 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/* The tolower() function converts an upper-case letter to the corresponding
	lower-case letter.  The argument must be representable as an unsigned char
	or the value of EOF.

	If the argument is an upper-case letter, the tolower() function returns the
	corresponding lower-case letter if there is one; otherwise, the argument is
	returned unchanged. */
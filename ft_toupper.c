/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 15:42:01 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/10/22 18:07:40 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/* The toupper() function converts a lower-case letter to the corresponding
	upper-case letter.  The argument must be representable as an unsigned char
	or the value of EOF.
	
	If the argument is a lower-case letter, the toupper() function returns the
	corresponding upper-case letter if there is one; otherwise, the argument is
	returned unchanged. */
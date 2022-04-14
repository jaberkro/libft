/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstnew.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/24 12:19:07 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/04/14 12:27:31 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstnew(int value)
{
	t_dlist	*out;

	out = malloc(sizeof(t_dlist));
	if (out == NULL)
		return (NULL);
	out->val = value;
	out->previous = NULL;
	out->next = NULL;
	return (out);
}

/* Make a new element that can be added to a list / creates a new list. */
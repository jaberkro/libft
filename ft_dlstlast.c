/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstlast.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/21 21:00:31 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/04/14 12:26:28 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstlast(t_dlist *dlst)
{
	if (!dlst)
		return (0);
	while (dlst->next != NULL)
		dlst = dlst->next;
	return (dlst);
}

/* Returns a pointer to the last element in the doubly linked list */
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstswap.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/24 20:32:05 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/04/14 12:28:56 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstswap(t_dlist **dlst)
{
	t_dlist	*tmp;

	tmp = (*dlst)->next;
	if ((*dlst)->val && tmp->val)
	{
		(*dlst)->next = tmp->next;
		if ((*dlst)->next != NULL)
			(*dlst)->next->previous = *dlst;
		(*dlst)->previous = tmp;
		(*dlst)->previous->next = *dlst;
		*dlst = tmp;
	}
}

/* Swap two upper elements of a doubly linked list */

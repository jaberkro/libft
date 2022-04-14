/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstrev_rotate.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/24 19:56:08 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/04/14 12:28:08 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstrev_rotate(t_dlist **dlst)
{
	t_dlist	*copy;
	t_dlist	*tmp;

	tmp = *dlst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	copy = tmp->previous;
	tmp->next = *dlst;
	tmp->next->previous = tmp;
	copy->next->previous = NULL;
	*dlst = copy->next;
	copy->next = NULL;
}

/* Reverse rotate a doubly linked list. */

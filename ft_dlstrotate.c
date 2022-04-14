/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstrotate.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/24 12:51:01 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/04/14 12:28:34 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstrotate(t_dlist **dlst)
{
	t_dlist	*copy;
	t_dlist	*tmp;

	tmp = *dlst;
	copy = tmp;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *dlst;
	tmp->next->previous = tmp;
	copy->next->previous = NULL;
	*dlst = copy->next;
	copy->next = NULL;
}

/* Rotate a doubly linked list. */

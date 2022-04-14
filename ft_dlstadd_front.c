/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstadd_front.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/24 12:29:09 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/04/14 12:25:40 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd_front(t_dlist **dlst, t_dlist *new)
{
	new->next = *dlst;
	(*dlst)->previous = new;
	*dlst = new;
}

/* Adds the element ’new’ at the beginning of the doubly linked list. */
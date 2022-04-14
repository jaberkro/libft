/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstclear.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/25 18:37:48 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/04/14 12:26:08 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstclear(t_dlist **dlst)
{
	t_dlist	*tmp;

	if (!dlst || !*dlst)
		return ;
	while ((*dlst)->previous)
		*dlst = (*dlst)->previous;
	while (*dlst)
	{
		tmp = *dlst;
		*dlst = (*dlst)->next;
		free(tmp);
	}
}

/* Removes all links of the doubly linked list. */
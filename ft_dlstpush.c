/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstpush.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/24 20:50:56 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/04/14 12:27:46 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dlstpush(t_dlist **dlst1, t_dlist **dlst2)
{
	t_dlist	*tmp;

	tmp = (*dlst2)->next;
	if (!*dlst1 && !*dlst2)
		return (0);
	else if (!*dlst1)
	{
		*dlst1 = ft_dlstnew((*dlst2)->val);
		if (!*dlst1)
			return (0);
		(*dlst1)->next = NULL;
		tmp->previous = NULL;
		free(*dlst2);
		*dlst2 = tmp;
		return (1);
	}
	(*dlst1)->previous = *dlst2;
	(*dlst1)->previous->next = *dlst1;
	if (tmp)
		tmp->previous = NULL;
	(*dlst1)->previous->previous = NULL;
	*dlst1 = (*dlst1)->previous;
	*dlst2 = tmp;
	return (1);
}

/* Push one element to the top of dlst1 from the top of dlst2. */

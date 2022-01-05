/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 21:05:37 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/11/28 16:27:54 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const *s1, char const *set, int i, int *j)
{
	if (s1[i] == set[*j])
	{
		(*j)++;
		return (1);
	}
	(*j)++;
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	start;
	int	end;
	int	found;

	i = 0;
	start = -1;
	end = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i])
	{
		j = 0;
		found = 0;
		while (set[j])
			found += ft_check(s1, set, i, &j);
		if (found == 0 && start == -1)
			start = i;
		if (found == 0)
			end = i;
		i++;
	}
	return (ft_substr(s1, start, end - start + 1));
}

/* Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
 */
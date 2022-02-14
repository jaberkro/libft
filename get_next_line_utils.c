/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 21:12:19 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/01/19 21:16:52 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	gnl_strlen(char *input)
{
	int	i;

	i = 0;
	while (input && input[i])
		i++;
	return (i);
}

int	gnl_strchr_nl(char *input)
{
	int	i;

	i = 0;
	while (input && input[i])
	{
		if (input[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

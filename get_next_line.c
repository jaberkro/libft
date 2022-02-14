/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 21:12:24 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/02/14 18:14:57 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	gnl_strlen(char *input);
int	gnl_strchr_nl(char *input);

static void	gnl_memmove(char *input, int start, int len)
{
	int	i;

	i = 0;
	while (i + start < len)
	{
		input[i] = input[start + i];
		i++;
	}
	input[i] = '\0';
}

static char	*gnl_strjoin(char *s1, char *s2, int s1len, int s2len)
{
	int		i;
	char	*out;

	i = 0;
	out = malloc(s1len + s2len + 1);
	if (out == NULL)
		return (NULL);
	while (i < s1len + s2len)
	{
		if (i < s1len)
			out[i] = s1[i];
		else
			out[i] = s2[i - s1len];
		i++;
		if (i > s1len && out[i - 1] == '\n')
		{
			gnl_memmove(s2, i - s1len, s2len);
			break ;
		}
	}
	out[i] = '\0';
	free(s1);
	return (out);
}

char	*gnl_free_return(char *tofree)
{
	free(tofree);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE + 1];
	char		*output;
	int			buflen;

	output = gnl_strjoin(NULL, buf, 0, gnl_strlen(buf));
	if (output == NULL || gnl_strchr_nl(output) != -1)
		return (output);
	buflen = read(fd, buf, BUFFER_SIZE);
	if (buflen == -1 || (buflen == 0 && output[0] == '\0'))
		return (gnl_free_return(output));
	while (buflen != 0 && gnl_strchr_nl(output) == -1)
	{
		output = gnl_strjoin(output, buf, gnl_strlen(output), buflen);
		if (output == NULL || gnl_strchr_nl(output) != -1)
			return (output);
		buflen = read(fd, buf, BUFFER_SIZE);
		if (buflen == -1)
			return (gnl_free_return(output));
	}
	if (output != NULL && gnl_strchr_nl(output) == -1)
		buf[0] = '\0';
	return (output);
}

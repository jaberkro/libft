/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/08 13:13:49 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/12/08 13:14:49 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen(int n)
{
	int	out;

	out = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		out++;
	}
	while (n > 0)
	{
		out++;
		n /= 10;
	}
	return (out);
}

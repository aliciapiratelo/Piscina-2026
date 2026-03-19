/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magnitudes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguiama@student.42sp.org.br <cguiama@gm    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 21:24:59 by cguiama@stu       #+#    #+#             */
/*   Updated: 2026/03/15 21:25:01 by cguiama@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_all_zeros(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

void	print_magnitude(int zeros, char *buf, int *state)
{
	char	mag[40];
	int		i;

	if (state[1])
		return ;
	mag[0] = '1';
	i = 1;
	while (i <= zeros)
	{
		mag[i] = '0';
		i++;
	}
	mag[i] = '\0';
	search_key(mag, buf, state);
}

void	split_magnitudes(char *str, int len, char *buf, int *state)
{
	int	g;

	if (len == 0 || state[1])
		return ;
	g = len % 3;
	if (g == 0)
		g = 3;
	if (!is_all_zeros(str, g))
	{
		convert_chunk(str, g, buf, state);
		if (len > 3 && !state[1])
		{
			if (state[0] == 1)
				write(1, " ", 1);
			print_magnitude(len - g, buf, state);
			if (state[0] == 1 && !is_all_zeros(str + g, len - g))
				write(1, " ", 1);
		}
	}
	split_magnitudes(str + g, len - g, buf, state);
}

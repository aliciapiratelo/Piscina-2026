/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   covert_chunk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaue-fa <lkaue-fa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 21:30:32 by lkaue-fa          #+#    #+#             */
/*   Updated: 2026/03/15 21:30:49 by lkaue-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	process_tens(int last_two, char *buf, int *state)
{
	char	key[20];
	int		units;

	if (last_two == 0 || state[1])
		return ;
	if (last_two < 20)
	{
		ft_itoa(last_two, key);
		search_key(key, buf, state);
	}
	else
	{
		ft_itoa((last_two / 10) * 10, key);
		search_key(key, buf, state);
		units = last_two % 10;
		if (units > 0 && !state[1])
		{
			if (state[0] == 1)
				write(1, " ", 1);
			ft_itoa(units, key);
			search_key(key, buf, state);
		}
	}
}

void	get_values(char *chunk, int len, int *h, int *l2)
{
	*h = 0;
	*l2 = 0;
	if (len == 3)
	{
		*h = chunk[0] - '0';
		*l2 = (chunk[1] - '0') * 10 + (chunk[2] - '0');
	}
	else if (len == 2)
		*l2 = (chunk[0] - '0') * 10 + (chunk[1] - '0');
	else if (len == 1)
		*l2 = chunk[0] - '0';
}

void	convert_chunk(char *chunk, int len, char *buf, int *state)
{
	int		hundreds;
	int		last_two;
	char	key[20];

	if (state[1])
		return ;
	get_values(chunk, len, &hundreds, &last_two);
	if (hundreds > 0)
	{
		ft_itoa(hundreds, key);
		search_key(key, buf, state);
		if (state[0] == 1 && !state[1])
			write(1, " ", 1);
		search_key("100", buf, state);
		if (last_two > 0 && state[0] == 1 && !state[1])
			write(1, " ", 1);
	}
	process_tens(last_two, buf, state);
}

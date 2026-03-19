/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicmarq <alicmarq@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-16 00:29:20 by alicmarq          #+#    #+#             */
/*   Updated: 2026-03-16 00:29:20 by alicmarq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*print_val(char *buf, int i, int *state)
{
	while (buf[i] && buf[i] != ':')
		i++;
	if (buf[i] == ':')
		i++;
	while (buf[i] == ' ')
		i++;
	while (buf[i] && buf[i] != '\n')
	{
		if (state[0] == 1)
			write(1, &buf[i], 1);
		i++;
	}
	return (&buf[i]);
}

char	*search(char *key, char *buf, int *state)
{
	char	current_nb[100];
	int		i;
	int		j;

	i = 0;
	while (buf[i] != '\0')
	{
		j = 0;
		while (buf[i] >= '0' && buf[i] <= '9')
		{
			current_nb[j] = buf[i];
			j++;
			i++;
		}
		current_nb[j] = '\0';
		if (ft_strcmp(current_nb, key) == 0)
			return (print_val(buf, i, state));
		while (buf[i] && buf[i] != '\n')
			i++;
		if (buf[i] == '\n')
			i++;
	}
	return (NULL);
}

void	search_key(char *key, char *buf, int *state)
{
	if (state[1])
		return ;
	if (!search(key, buf, state))
		state[1] = 1;
}

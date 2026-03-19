/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:06:28 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/09 19:25:22 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *st)
{
	int	s;
	int	res;

	s = 1;
	res = 0;
	while ((*st >= '\t' && *st <= '\r') || *st == ' ')
		st++;
	while (*st == '-' || *st == '+')
		if (*st++ == '-')
			s *= -1;
	while (ft_isdigit(*st))
		res = (res * 10) + (*st++ - '0');
	return (res * s);
}

// https://onlinegdb.com/SWXLPgkjB

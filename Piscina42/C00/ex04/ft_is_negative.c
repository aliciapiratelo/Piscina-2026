/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicmarq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:55:27 by alicmarq          #+#    #+#             */
/*   Updated: 2026/03/04 16:55:31 by alicmarq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	nn;
	char	p;

	nn = 'N';
	p = 'P';
	if (n < 0)
	{
		write(1, &nn, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

/*
int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
	return (0);
}
*/
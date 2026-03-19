/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicmarq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 09:21:31 by alicmarq          #+#    #+#             */
/*   Updated: 2026/03/09 09:21:39 by alicmarq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*
#include <unistd.h>

int	main(void)
{
	int		a;
	int		b;
	int		*c;
	int		*d;
	char	char_a;
	char	char_b;

	a = 2;
	b = 4;
	c = &a;
	d = &b;
	ft_swap(c, d);
	char_a = a + '0';
	char_b = b + '0';
	write(1, &char_a, 1);
	write(1, " ", 1);
	write(1, &char_b, 1);
	return (0);
}
*/

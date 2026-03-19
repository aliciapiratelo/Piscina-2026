/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicmarq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 09:22:44 by alicmarq          #+#    #+#             */
/*   Updated: 2026/03/09 09:23:00 by alicmarq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mov;

	div = *a / *b;
	mov = *a % *b;
	*a = div;
	*b = mov;
}

int	main(void)
{
	int	x;
	int	y;

	x = 42;
	y = 10;
	ft_ultimate_div_mod(&x, &y);
}

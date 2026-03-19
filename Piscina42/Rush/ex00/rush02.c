/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicmarq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 18:58:44 by alicmarq          #+#    #+#             */
/*   Updated: 2026/03/01 13:21:57 by alicmarq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	funcao_checar_posicao(int posicao_coluna, int posicao_linha, int x,
		int y)
{
	if ((posicao_coluna == 1 && posicao_linha == 1) || (posicao_coluna == x
			&& posicao_linha == 1))
		ft_putchar('A');
	else if ((posicao_coluna == 1 && posicao_linha == x) || (posicao_coluna == x
			&& posicao_linha == y))
		ft_putchar('C');
	else if (posicao_coluna == x || posicao_linha == y || posicao_coluna == 1
		|| posicao_linha == 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	posicao_coluna;
	int	posicao_linha;

	if (x <= 0 || y <= 0)
		return ;
	posicao_linha = 1;
	while (posicao_linha <= y)
	{
		posicao_coluna = 1;
		while (posicao_coluna <= x)
		{
			funcao_checar_posicao(posicao_coluna, posicao_linha, x, y);
			posicao_coluna++;
		}
		ft_putchar('\n');
		posicao_linha++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matriz4x4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicmarq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 18:02:56 by alicmarq          #+#    #+#             */
/*   Updated: 2026/03/07 18:03:06 by alicmarq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	display_grid(int grid[4][4])
{
	int	row;
	int	col;

	char c; /* caractere temporario*/
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = grid[row][col] + '0';
			write(1, &c, 1);
			if (col < 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
int	main(void)
{
	int	mat[4][4] = {0};

	display_grid(mat);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verificadorpositivo.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicmarq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 22:07:17 by alicmarq          #+#    #+#             */
/*   Updated: 2026/03/07 22:07:46 by alicmarq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_input(char *input, int clues[16])
{
	int	i;
	int	clues_i;

	i = 0;
	clues_i = 0;
	while (input[i] != '\0')
	{
		if (input[i] >= '1' && input[i] <= '4' && clues_i < 16)
		{
			clues[clues_i++] = input[i] - '0';
		}
		else if (input[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	if (clues_i == 16)
	{
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	clues[16];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!ft_check_input(argv[1], clues))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-17 13:32:31 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-17 13:32:31 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		k;
	int		j;

	j = 1;
	k = 0;
	if (argc >= 2)
	{
		while (j < argc)
			j++;
		while (j > 1)
		{
			k = 0;
			while (argv[j - 1][k] != '\0')
			{
				write (1, &argv[j - 1][k], 1);
				k++;
			}
			write(1, "\n", 1);
			j--;
		}
	}
}

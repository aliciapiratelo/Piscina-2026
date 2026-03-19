/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-17 11:31:19 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-17 11:31:19 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		j;
	int		k;

	j = 1;
	k = 0;
	if (argc > 1)
	{
		while (j < argc)
		{
			k = 0;
			while (argv[j][k] != '\0')
			{
				write (1, &argv[j][k], 1);
				k++;
			}
			j++ ;
			write (1, "\n", 1);
		}
	}
}

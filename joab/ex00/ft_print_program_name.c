/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-17 11:06:09 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-17 11:06:09 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned int	j;
	unsigned int	k;

	j = 0;
	k = 0;
	if (argc == 1)
	{
		while (argv[j][k] != '\0')
		{
			write(1, &argv[j][k], 1);
			k++;
		}
	}
	return (0);
}

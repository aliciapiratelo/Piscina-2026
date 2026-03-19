/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicmarq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:03:18 by alicmarq          #+#    #+#             */
/*   Updated: 2026/03/11 14:03:24 by alicmarq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
					&& str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* 
#include <unistd.h>

int	main(void)
{
	char	aux1[] = "";
	char	aux2[] = "Alicia";
	char	aux3[] = "A L I C I A";
	char	l;

	l = ft_str_is_alpha(aux1) + '0';
	write(1, &l, 1);
	l = ft_str_is_alpha(aux2) + '0';
	write(1, &l, 1);
	l = ft_str_is_alpha(aux3) + '0';
	write(1, &l, 1);
}
 */

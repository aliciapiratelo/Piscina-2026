/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicmarq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:04:46 by alicmarq          #+#    #+#             */
/*   Updated: 2026/03/11 14:04:53 by alicmarq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/* 
#include <unistd.h>

int	main(void)
{
	char	aux1[] = "";
	char	aux2[] = "ALICIA";
	char	aux3[] = "ALICIa";
	char	l;

	l = ft_str_is_uppercase(aux1) + '0';
	write(1, &l, 1);
	l = ft_str_is_uppercase(aux2) + '0';
	write(1, &l, 1);
	l = ft_str_is_uppercase(aux3) + '0';
	write(1, &l, 1);
}
 */
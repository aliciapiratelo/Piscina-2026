/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicmarq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:05:17 by alicmarq          #+#    #+#             */
/*   Updated: 2026/03/11 14:05:25 by alicmarq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}

/* 
int	main(void)
{
	char	aux1[] = "aaa\t";
	char	aux2[] = "~ /# ";
	char	aux3[] = "ALICIa";
	char	l;

	l = ft_str_is_printable(aux1) + '0';
	write(1, &l, 1);
	l = ft_str_is_printable(aux2) + '0';
	write(1, &l, 1);
	l = ft_str_is_printable(aux3) + '0';
	write(1, &l, 1);
}
  */
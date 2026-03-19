/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoalm <tiagoalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:00:43 by tiagoalm          #+#    #+#             */
/*   Updated: 2026/03/12 12:14:23 by tiagoalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int	ft_conference(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_conference(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("'!@#' esperado: 1 - Resultado: %d \n", ft_str_is_printable("!@#"));
	printf("'\\n' esperado: 0 - Resultado: %d \n", ft_str_is_printable("\n"));
	printf("' ' esperado: 1 - Resultado: %d \n", ft_str_is_printable(" "));
}
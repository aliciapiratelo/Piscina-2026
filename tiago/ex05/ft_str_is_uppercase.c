/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoalm <tiagoalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:44:45 by tiagoalm          #+#    #+#             */
/*   Updated: 2026/03/12 12:11:39 by tiagoalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

int	ft_conference(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
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
	printf("'abc' -> %d (esperado: 0)\n", ft_str_is_uppercase("abc"));
	printf("'ABC' -> %d (esperado: 1)\n", ft_str_is_uppercase("ABC"));
	printf("'aBc' -> %d (esperado: 0)\n", ft_str_is_uppercase("aBc"));
	printf("'DEF' -> %d (esperado: 1)\n", ft_str_is_uppercase("DEF"));
	printf("'abc1' -> %d (esperado: 0)\n", ft_str_is_uppercase("abc1"));
}

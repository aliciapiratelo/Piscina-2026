/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoalm <tiagoalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:48:27 by tiagoalm          #+#    #+#             */
/*   Updated: 2026/03/12 12:12:44 by tiagoalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str);

int	ft_conference(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
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
	printf("'abc' -> %d (esperado: 1)\n", ft_str_is_lowercase("abc"));
	printf("'ABC' -> %d (esperado: 0)\n", ft_str_is_lowercase("ABC"));
	printf("'aBc' -> %d (esperado: 0)\n", ft_str_is_lowercase("aBc"));
	printf("'xyz' -> %d (esperado: 1)\n", ft_str_is_lowercase("xyz"));
	printf("'abc1' -> %d (esperado: 0)\n", ft_str_is_lowercase("abc1"));
}
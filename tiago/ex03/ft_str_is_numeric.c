/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoalm <tiagoalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:14:36 by tiagoalm          #+#    #+#             */
/*   Updated: 2026/03/12 12:12:40 by tiagoalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

int	ft_conference(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_conference(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("'123' é numérico: %d\n", ft_str_is_numeric("123"));
	printf("'abc' é numérico: %d\n", ft_str_is_numeric("abc"));
	printf("'12a' é numérico: %d\n", ft_str_is_numeric("12a"));
	printf("'000' é numérico: %d\n", ft_str_is_numeric("000"));
	printf("'' é numérico: %d\n", ft_str_is_numeric(""));
}
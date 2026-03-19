/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoalm <tiagoalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 13:34:04 by tiagoalm          #+#    #+#             */
/*   Updated: 2026/03/12 12:11:52 by tiagoalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int	char_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!char_is_alpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;

	str1 = "OlaMundo";
	str2 = "42Porto";
	str3 = "Hello World";
	str4 = "";
	str5 = "Protocolo!";
	printf("--- Testando ft_str_is_alpha ---\n");
	printf("Teste 1 (\"%s\"): %d (Esperado: 1)\n", str1, ft_str_is_alpha(str1));
	printf("Teste 2 (\"%s\"): %d (Esperado: 0)\n", str2, ft_str_is_alpha(str2));
	printf("Teste 3 (\"%s\"): %d (Esperado: 0)\n", str3, ft_str_is_alpha(str3));
	printf("Teste 4 (\"%s\"): %d (Esperado: 1)\n", str4, ft_str_is_alpha(str4));
	printf("Teste 5 (\"%s\"): %d (Esperado: 0)\n", str5, ft_str_is_alpha(str5));
	return (0);
}

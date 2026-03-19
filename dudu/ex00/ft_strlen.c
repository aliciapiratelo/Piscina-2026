/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 09:12:26 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/10 16:12:09 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
#include <stdio.h>

int	main(void)
{
	int	tamanho;

	tamanho = ft_strlen("oi");
	printf("o numero de caracteres é %d\n", tamanho);
}

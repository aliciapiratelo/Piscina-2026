/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoalm <tiagoalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 18:51:46 by tiagoalm          #+#    #+#             */
/*   Updated: 2026/03/12 12:17:01 by tiagoalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "42 Porto";
	char	dest1[20];
	char	dest2[5];
	char	dest3[20];
	char	std_dest[20];

	ft_strncpy(dest1, src, 15);
	printf("Src: %s\n", src);
	printf("Dest: %s\n", dest1);
	ft_strncpy(dest2, src, 4);
	printf("Src: %s\n", src);
	printf("Dest (4 chars): %.4s\n", dest2);
	strncpy(std_dest, src, 15);
	ft_strncpy(dest3, src, 15);
	if (strcmp(std_dest, dest3) == 0)
		printf("Sucesso: O comportamento e identico ao da strncpy oficial!\n");
	else
		printf("Erro: O comportamento difere da oficial.\n");
	return (0);
}

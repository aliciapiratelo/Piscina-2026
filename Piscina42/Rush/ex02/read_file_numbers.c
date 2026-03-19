/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicmarq <alicmarq@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-14 19:59:59 by alicmarq          #+#    #+#             */
/*   Updated: 2026-03-14 19:59:59 by alicmarq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>  
#include <stdlib.h> 
#include <unistd.h> 

/* main → lê o arquivo → buf
main → chama search(key, buf)
search → percorre o buf → acha a chave → imprime o valor
 */

void	search(char *key, char *buf)
{
	char	current_nb[100];
	int		i;
	int		j;

	i = 0;
	while (buf[i] != '\0')
	{
		j = 0; 
		while (buf[i] >= '0' && buf[i] <= '9')
			current_nb[j++] = buf[i++];
		current_nb[j] = '\0';
		j = 0;
		while (current_nb[j] && key[j] && current_nb[j] == key[j])
			j++;
		if (current_nb[j] == '\0' && key[j] == '\0')
		{
			while (buf[i] && buf[i] != ':')
				i++;
			i++; 
			while (buf[i] == ' ')
				i++;
			while (buf[i] && buf[i] != '\n')
				write(1, &buf[i++], 1);
			write(1, "\n", 1);
			return ;
		}
		while (buf[i] && buf[i] != '\n')
			i++;
		if (buf[i] == '\n')
			i++;
	}
}



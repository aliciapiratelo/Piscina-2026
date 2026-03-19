/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicmarq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:04:22 by alicmarq          #+#    #+#             */
/*   Updated: 2026/03/11 14:04:28 by alicmarq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	aux1[] = "";
	char	aux2[] = "alicia";
	char	aux3[] = "Alicia";
	char	l;

	l = ft_str_is_lowercase(aux1) + '0';
	write(1, &l, 1);
	l = ft_str_is_lowercase(aux2) + '0';
	write(1, &l, 1);
	l = ft_str_is_lowercase(aux3) + '0';
	write(1, &l, 1);
}
 */
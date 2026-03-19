/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicmarq <alicmarq@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-17 20:59:20 by alicmarq          #+#    #+#             */
/*   Updated: 2026-03-17 20:59:20 by alicmarq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/* 
int	main(void)
{
	char	aux1[] = "";
	char	aux2[] = "12345";
	char	aux3[] = "123a5";
	char	aux4[] = "99 99 99";
	char	l;

	l = ft_str_is_numeric(aux1) + '0';
	write(1, &l, 1);
	l = ft_str_is_numeric(aux2) + '0';
	write(1, &l, 1);
	l = ft_str_is_numeric(aux3) + '0';
	write(1, &l, 1);
	l = ft_str_is_numeric(aux4) + '0';
	write(1, &l, 1);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguiama@student.42sp.org.br <cguiama@gm    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 21:25:09 by cguiama@stu       #+#    #+#             */
/*   Updated: 2026/03/15 21:25:09 by cguiama@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_valid_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	load_buffer(char *path, char *buf)
{
	int	fd;
	int	bytes;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, buf, 8191);
	if (bytes < 0)
	{
		close(fd);
		return (0);
	}
	buf[bytes] = '\0';
	close(fd);
	return (1);
}

int	run_translation(char *num, int len, char *buf)
{
	int	state[2];

	state[0] = 0;
	state[1] = 0;
	if (len == 1 && num[0] == '0')
		search_key("0", buf, state);
	else
		split_magnitudes(num, len, buf, state);
	if (state[1])
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	state[0] = 1;
	if (len == 1 && num[0] == '0')
		search_key("0", buf, state);
	else
		split_magnitudes(num, len, buf, state);
	return (0);
}

int	execute_rush(char *path, char *num)
{
	char	buf[8192];

	if (!is_valid_number(num))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!load_buffer(path, buf))
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	if (run_translation(num, ft_strlen(num), buf))
		return (1);
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		return (execute_rush("numbers.dict", argv[1]));
	if (argc == 3)
		return (execute_rush(argv[1], argv[2]));
	write(1, "Error\n", 6);
	return (1);
}

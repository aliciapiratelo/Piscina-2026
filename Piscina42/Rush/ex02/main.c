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

int	main(int argc, char **argv)
{
	int		fd;
	char	*buf;
	int		read_size;
	char 	*path;

	if (argc != 2 && argv != 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc == 3)
		path = argv[1];
	else
		path = "numbers.dict";

		fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (1);
	buf = malloc(65536);
	if (buf == NULL)
		return (1);
	read_size = read(fd, buf, 65536);
	buf[read_size] = '\0';
	search(argv[1], buf);

	close(fd);
	free(buf);
	return(0);
}


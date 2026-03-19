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

/* 1. ler o arquivo
	com o que? */

#include <fcntl.h>  /*  para o open */
#include <stdlib.h> /* para malloc e free */
#include <unistd.h> /* para read, write e close */

int	main(void)
{
	int		fd;
	char	*buf;
	int		read_size;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (1);
	buf = malloc(692);
	if (buf == NULL)
		return (1);
	read_size = read(fd, buf, 691);
	if (read_size > 0)
	{
		write(1, buf, read_size);
	}
	close(fd);
	free(buf);
}

// função busca(chave, caminho_do_arquivo):

//     1. abre o arquivo com open()
//        se falhou → retorna sem fazer nada

//     2. lê um caractere por vez com read()
// 	se eu sou de 0 a 9 - vou andar quanto? aonde?
// 	ir caractere por caractere - tratamento string

//     3. para cada linha:
//            lê os caracteres antes do ':'
//            guarda em current_nb[100]      ← stack, sem malloc
// 			o pc vai achar o tamanho da memria e fazer
//            aplica trim (remove espaços)
// 			funcao skip space (que vai ser criada) e chama essa funcao

//     4. compara current_nb com a chave
//        se são iguais:
//            pula o ':'
//            pula os espaços depois do ':'
//            imprime cada caractere com write() até encontrar '\n'
//            fecha o arquivo com close()
//            retorna

//        se não são iguais:
//            pula o resto da linha até o '\n'
//            vai para a próxima linha

//     5. se chegou no fim do arquivo sem achar:
//            fecha o arquivo com close()
//            imprime "Dict Error\n"

void	search(char *key, char *path)
{
	int		fd; /*  número da mesa do arquivo */
	char buf[1];
	int bytes;
	char current_nb[100];
	int i;
	int j;

	fd = open(path, O_RDONLY); /*  abre um aquivo */
	if (fd == -1) /* se falhou */
	{
		write(1, "Dict Error\n", 11); /*  avisa */
		return ; /* para */
	}
	i = 0;
	bytes = read(fd, buf, 1);
	while (bytes > 0)
	{
		while (buf[0] >= '0' && buf [0] <= '9')
		{
			current_nb[i] = buf[0];
			i++;
		bytes = read(fd, buf, 1);
		}
		current_nb[i] = '\0'; /* terminador de string */
		i = 0;
		j = 0;
		while (current_nb[j] == key[j])
			j++;
		if (current_nb[j] == '\0' && key[j] == '\0')
		{
			while (buf[0] != ':')
				bytes = read(fd, buf, 1);
			bytes = read(fd, buf, 1); /* pula o : */
			while (buf[0] == ' ')
				bytes = read(fd, buf, 1);
			while (buf[0] != '\n' && buf[0] != '\0')
			{
				write(1, buf, 1); /* imprime o caractere */
				if (read (fd, buf, 1) <= 0)
						break ;
			}
			write(1, "\n", 1);
			close (fd);
			return ;
		}
		while (buf[0] != '\n' && read(fd, buf, 1) > 0);		
	}
	close(fd);
}

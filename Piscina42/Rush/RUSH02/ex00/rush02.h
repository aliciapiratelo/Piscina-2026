/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguiama@student.42sp.org.br <cguiama@gm    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 01:14:38 by cguiama@stu       #+#    #+#             */
/*   Updated: 2026/03/15 21:24:23 by cguiama@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src, int len);
void	ft_itoa(int n, char *buf);

char	*search(char *key, char *buf, int *state);
void	search_key(char *key, char *buf, int *state);

void	process_tens(int last_two, char *buf, int *state);
void	get_values(char *chunk, int len, int *h, int *l2);
void	convert_chunk(char *chunk, int len, char *buf, int *state);

int		is_all_zeros(char *str, int size);
void	print_magnitude(int zeros, char *buf, int *state);
void	split_magnitudes(char *str, int len, char *buf, int *state);

#endif

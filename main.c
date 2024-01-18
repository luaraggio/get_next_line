/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 22:12:10 by lraggio           #+#    #+#             */
/*   Updated: 2024/01/17 23:16:50 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*s;
	int		lines;

	lines = 1;
	while ((s == get_next_line(fd)))
		fd = open("ara.txt", O_RDONLY);
	while ((lines == read(fd, s, BUFFER_SIZE)))
	{
		s[lines] = '\0';
		printf("%s\n", s);
	}
}

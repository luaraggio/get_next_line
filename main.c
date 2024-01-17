/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 22:12:10 by lraggio           #+#    #+#             */
/*   Updated: 2024/01/17 20:32:08 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	int	fd;
	char	*s;
	char	lines;

	lines = 1;
	while (lines = get_next_line(fd))
	fd = open("ara.txt", O_RDONLY);
	while ((lines = read(fd, s, BUFFER_SIZE)))
	{
		s[lines] = '\0';
		printf("%s\n", s);
	}
}
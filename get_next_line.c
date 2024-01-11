/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:05:34 by lraggio           #+#    #+#             */
/*   Updated: 2024/01/10 22:11:35 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_list	*list = 0;
	char	*next_line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
//return();
}

void	add_list(t_list **list, int fd)
{
}

void	new_line(t_list **list, int fd)
{
}

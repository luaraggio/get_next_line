/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:05:34 by lraggio           #+#    #+#             */
/*   Updated: 2024/01/17 23:14:52 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*get_line(int fd, char *backup, char *str)
{
	int	read_line;

	while (read_line != '\0')
	{
		read_line = read(fd, str, BUFFER_SIZE);
		if (read_line < 0)
			return (NULL);
		else if (read_line == 0)
			break ;
		str[read_line] = '\0';
		if (!backup)
			backup = ft_strdup("");
		backup = ft_strjoin(backup, str);
		if (ft_strchr(backup, '\n') != NULL)
			break ;
	}
	return (backup);
}

char	*get_backup(char *line)
{
	int		i;
	char	*temporary;

	i = 0;
	while (!(line[i] == '\n' || line[i] == '\0'))
		i++;
	if (line[i] == '\0')
		return (NULL);
	temporary = ft_substr(line, i + 1, ft_strlen(line));
	i++;
	line[i] = '\0';
	return (temporary);
}

char	*get_next_line(int fd)
{
	static char	*backup;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	line = malloc((sizeof(char) * (BUFFER_SIZE + 1)));
	if (!line)
		return (NULL);
	line = get_line(fd, backup, line);
	backup = get_backup(line);
	return (line);
}

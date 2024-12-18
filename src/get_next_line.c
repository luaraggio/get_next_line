
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
	int		read_line;
	char	*intermediary;

	read_line = 1;
	while (read_line)
	{
		read_line = read(fd, str, BUFFER_SIZE);
		if (read_line < 0)
			return (NULL);
		else if (read_line == 0)
			break ;
		str[read_line] = '\0';
		if (!backup)
			backup = ft_strdup("");
		intermediary = backup;
		backup = ft_strjoin(intermediary, str);
		free(intermediary);
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
	while ((line[i] != '\n' && line[i] != '\0'))
		i++;
	if (line[i] == '\0')
		return (NULL);
	temporary = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*temporary == '\0')
	{
		free(temporary);
		temporary = NULL;
	}
	i++;
	line[i] = '\0';
	return (temporary);
}

char	*get_next_line(int fd)
{
	static char	*backup;
	char		*buffer;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0 || fd > 1024)
		return (NULL);
	buffer = malloc((sizeof(char) * (BUFFER_SIZE + 1)));
	if (!buffer)
		return (NULL);
	line = get_line(fd, backup, buffer);
	free(buffer);
	if (!line)
		return (NULL);
	backup = get_backup(line);
	return (line);
}

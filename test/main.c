
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int fd;
	char *s;
 	s = get_next_line(fd);
	fd = open("teste.txt", O_RDONLY);
	printf("%s", s);
	free(s);
}

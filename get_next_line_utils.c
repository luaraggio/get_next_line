/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:05:48 by lraggio           #+#    #+#             */
/*   Updated: 2024/01/10 22:06:28 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

size_t  read(int fd, void *buf, size_t cnt)
{
}

char	*ft_strchr(const char *s, int c)
{
	char			*ss;
	int				i;
	unsigned char	cc;

	i = 0;
	ss = (char *) s;
	cc = (unsigned char) c;
	while (ss[i] != '\0')
	{
		if (ss[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (!c)
		return (&ss[i]);
	return (NULL);
}

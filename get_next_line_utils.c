/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:05:48 by lraggio           #+#    #+#             */
/*   Updated: 2024/01/17 23:04:34 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	int		len;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		nstr = (char *)malloc((len + 1) * (sizeof(char)));
		if (!nstr)
			return (NULL);
		while (*s1 != '\0')
			*(nstr)++ = *(s1)++;
		while (*s2 != '\0')
			*(nstr)++ = *(s2)++;
		*nstr = '\0';
		nstr -= len;
		return (nstr);
	}
	return (NULL);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*(dest)++ = *(src)++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*ss;

	ss = (char *) s;
	dup = malloc((ft_strlen(ss) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, ss);
	return (dup);
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	sub = (char *)malloc(len + 1 * (sizeof(char)));
	if (!sub)
		return (NULL);
	while (s[start] != '\0' && i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

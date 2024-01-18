/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:05:59 by lraggio           #+#    #+#             */
/*   Updated: 2024/01/17 22:38:44 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

char     *get_line(int fd, char *backup, char *str);
char     *get_backup(char *line);
char    *get_next_line(int fd);
size_t  ft_strlen(const char *str);
char    *ft_strjoin(char const *s1, char const *s2);
char     *ft_strcpy(char *dest, char *src);
char    *ft_strdup(const char *s);
char    *ft_strchr(const char *s, int c);
char    *ft_substr(char const *s, unsigned int start, size_t len);

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

#endif

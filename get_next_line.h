/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabaziky <gabaziky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:36:45 by gabaziky          #+#    #+#             */
/*   Updated: 2025/03/09 18:37:11 by gabaziky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_strcpy_joined(char *res, char *s1, char *s2);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_read_until_newline(int fd, char *buffer);
char	*ft_save_remainder(char *buffer);
char	*ft_extract_line(char *buffer);

#endif

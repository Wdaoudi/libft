/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:01:59 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/09/23 15:15:46 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
#include "../libft.h"
# include <stdlib.h>
# include <unistd.h>

// size_t	ft_strlen(const char *str);
// char	*ft_strchr(char *s, int c);
// char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr_spe(char const *s, unsigned int start, size_t len);
char	*get_next_line(int fd);
char	*ft_line(char *save);
char	*ft_save(char *save);
char	*ft_read_fd(int fd, char *save);

#endif
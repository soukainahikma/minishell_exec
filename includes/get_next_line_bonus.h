/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shikma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 18:13:26 by shikma            #+#    #+#             */
/*   Updated: 2020/01/01 14:52:37 by shikma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <sys/stat.h>
# include <sys/types.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, unsigned int start, size_t len);
int		get_next_line(int fd, char **line);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
#endif

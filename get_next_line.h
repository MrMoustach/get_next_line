/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:07:48 by iharchi           #+#    #+#             */
/*   Updated: 2019/11/05 22:11:14 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
char	*ft_strncpy(char *dest, char const *src, unsigned int n, char stop);
char	*ft_strncat(char *dest, char const *src, int nb);
int		ft_strlen(const char *str);
char	*resetbuff(char *buff);
int		ft_iselig(char *s);
#endif

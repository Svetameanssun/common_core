/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:57:31 by stitovsk          #+#    #+#             */
/*   Updated: 2023/11/06 17:54:20 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strncpy(char *dest, char *src, int n);
int		count_till_nl(char *str);
int		count_after_nl(char *str);
int		has_nl(char *str);
char	*copy_till_nl(char *str);
char	*read_till_nl(int fd, char *str);
char	*update_statik_str(char *old_str);
char	*get_next_line(int fd);

#endif

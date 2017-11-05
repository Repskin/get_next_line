/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 15:30:04 by tburnouf          #+#    #+#             */
/*   Updated: 2017/10/28 15:30:05 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# include <libft.h>
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

char			*ft_strjoinch(char const *s1, char c)
int				ft_copyuntil(char **dst, char *src, char c)
static t_list	*correct_file(t_list **file, int fd)
int				get_next_line(const int fd, char **line);

#endif

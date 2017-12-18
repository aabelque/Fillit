/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabelque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 14:52:44 by aabelque          #+#    #+#             */
/*   Updated: 2017/12/18 10:24:23 by aabelque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read(char *s)
{
	int		fd;
	char	*buf;
	int		byte_size;
	int		i;

	fd = open(s, O_RDONLY);
	if (!fd || !(buf = (char *)malloc(sizeof(char) * BUF_SIZE)))
		return (NULL);
	byte_size = read(fd, buf, BUF_SIZE);
	buf[byte_size] = '\0';
	i = ft_strlen(buf);
	if (i == 0)
		ft_putstr("error\n");
	close(fd);
	return (buf);
}

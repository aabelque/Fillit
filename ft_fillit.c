/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:53:27 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/18 10:22:21 by aabelque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char *buf;
	char **tetr;

	g_size = 2;
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit [file]\n");
		exit(1);
	}
	buf = ft_read(argv[1]);
	tetr = ft_tetr(buf);
	if ((ft_valid_map(tetr)) == 0)
		ft_putstr("error\n");
	if ((ft_valid_t(tetr)) == 0)
		ft_putstr("error\n");
	ft_fill(tetr);
	return (0);
}

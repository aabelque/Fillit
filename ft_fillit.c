/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 19:41:42 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/18 19:41:49 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "lib/libft.h"

int		main(int argc, char **argv)
{
	char	*buf;
	char	**tetr;
	int		i;

	i = 0;
	g_size = 2;
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit [file]\n");
		exit(1);
	}
	else
	{
		buf = ft_read(argv[1]);
		if (buf == NULL)
			ft_putstr("error\n");
		tetr = ft_tetr(buf);
		if (!ft_valid_t(tetr) || !ft_valid_map(buf))
			ft_putstr("error\n");
		else
			ft_fill(tetr);
	}
	return (0);
}

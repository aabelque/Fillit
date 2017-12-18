/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabelque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 13:06:45 by aabelque          #+#    #+#             */
/*   Updated: 2017/12/18 10:48:40 by aabelque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_fill(char **tetr)
{
	char	**sq;
	int		sol;

	sol = 0;
	g_size = 2;
	sq = NULL;
	while (sol == 0)
	{
		sq = ft_create_m(g_size);
		if (resolv(tetr, sq, 0) == 1)
		{
			sol = 1;
			ft_print_m(sq);
		}
		ft_free_m(sq);
		g_size++;
	}
}

int		resolv(char **tetr, char **sq, int p)
{
	int xy[2];
	int place;

	if (tetr[p] == NULL)
		return (1);
	place = -1;
	while (++place != g_size * g_size)
	{
		xy[0] = place / g_size;
		xy[1] = place % g_size;
		if (ft_rec_coord(tetr[p], xy, sq, p))
		{
			if (resolv(tetr, sq, p + 1))
				return (1);
			rm_t(p, sq);
		}
	}
	return (0);
}

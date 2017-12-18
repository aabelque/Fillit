/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mv_tetr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabelque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 14:38:36 by aabelque          #+#    #+#             */
/*   Updated: 2017/12/18 10:31:46 by aabelque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_mv_tetr(int dest[4][4], int src[4][4], char **sq, int p)
{
	int i;
	int ox;
	int oy;

	i = -1;
	ox = src[0][1];
	oy = src[0][0];
	while (++i < 4)
	{
		src[i][0] = src[i][0] - oy;
		src[i][1] = src[i][1] - ox;
	}
	i = -1;
	while (++i < 4)
	{
		dest[i][0] = dest[0][0] + src[i][0];
		dest[i][1] = dest[0][1] + src[i][1];
	}
	if (ft_check(dest, sq) == 0)
		return (0);
	t_add(sq, dest, p);
	return (1);
}

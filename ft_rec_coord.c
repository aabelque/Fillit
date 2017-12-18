/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rec_coord.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabelque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 15:54:16 by aabelque          #+#    #+#             */
/*   Updated: 2017/12/18 10:33:28 by aabelque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_rec_coord(char *tetr, int xy[2], char **sq, int p)
{
	int new_c[4][4];
	int origin_c[4][4];
	int i;
	int count;

	new_c[0][0] = xy[0];
	new_c[0][1] = xy[1];
	i = 0;
	count = 0;
	while (tetr[i] != '\0' && count < 4)
	{
		if (tetr[i] == '#')
		{
			origin_c[count][0] = i / 5;
			origin_c[count][1] = i % 5;
			count++;
		}
		i++;
	}
	if (ft_mv_tetr(new_c, origin_c, sq, p) == 0)
		return (0);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rm_t.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabelque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 15:09:27 by aabelque          #+#    #+#             */
/*   Updated: 2017/12/17 22:04:36 by aabelque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	rm_t(int p, char **sq)
{
	int y;
	int x;

	y = 0;
	while (sq[y] != '\0')
	{
		x = -1;
		while (sq[y][++x] != '\0')
			if (sq[y][x] == 'A' + p)
				sq[y][x] = '.';
		y++;
	}
}

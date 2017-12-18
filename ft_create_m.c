/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_m.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabelque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 16:55:48 by aabelque          #+#    #+#             */
/*   Updated: 2017/12/16 17:07:52 by aabelque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_create_m(int size)
{
	char	**map;
	int		i;
	int		j;

	j = -1;
	i = -1;
	map = (char**)malloc(sizeof(char*) * (size + 1));
	while (++i < size)
	{
		map[i] = (char*)malloc(sizeof(char) * (size + 1));
		while (++j < size)
			map[i][j] = '.';
		map[i][j] = '\0';
		j = -1;
	}
	map[i] = NULL;
	return (map);
}

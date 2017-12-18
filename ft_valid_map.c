/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabelque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 18:37:05 by aabelque          #+#    #+#             */
/*   Updated: 2017/12/18 12:14:28 by aabelque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_valid_map(char **s)
{
	int i;

	i = -1;
	while (s[++i] != '\0')
	{
		if ((ft_map_v(s[i], 0, 0, 0)) == 0)
			return (0);
	}
	return (1);
}

int		ft_map_v(char *s, int n, int d, int p)
{
	int i;

	i = -1;
	while (s[0] == '\n')
		return (0);
	while (s[++i] != '\0')
	{
		if (s[i] == '\n')
			n++;
		if (s[i] == '#')
			d++;
		if (s[i] == '.')
			p++;
	}
	if (d != 4 || p != 12 || (n <= 4 && n >= 5))
		return (0);
	return (1);
}

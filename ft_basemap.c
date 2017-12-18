/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basemap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 19:28:13 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/18 19:32:28 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	valid_basemap(char *s)
{
	int	i;
	int p;
	int	d;
	int nl;

	i = 0;
	p = 0;
	d = 0;
	nl = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '.')
			p++;
		else if (s[i] == '#')
			d++;
		else if (s[i] == '\n')
			nl++;
		i++;
	}
	if (p % 12 == 0 && d % 4 == 0 && (nl + 1) % 5 == 0)
		return (1);
	return (0);
}
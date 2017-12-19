/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_t.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 19:35:51 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/19 08:50:46 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_char_v(char *s, int n, int d, int p)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
			n++;
		if (s[i] == '#')
			d++;
		if (s[i] == '.')
			p++;
		i++;
	}
	if (d == 4 && p == 12 && n == 4)
		return (1);
	return (0);
}

int	ft_tetr_v(char *s)
{
	int	u;
	int	i;

	u = 0;
	i = 0;
	if (ft_char_v(s, 0, 0, 0))
	{
		while (s[i] != '\0')
		{
			if (s[i] == '#')
			{
				if ((i + 1) < 20 && s[i + 1] == '#')
					u++;
				if ((i - 1) >= 0 && s[i - 1] == '#')
					u++;
				if ((i + 5) < 20 && s[i + 5] == '#')
					u++;
				if ((i - 5) >= 0 && s[i - 5] == '#')
					u++;
			}
			i++;
		}
	}
	return (u == 6 || u == 8);
}

int	ft_valid_t(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!ft_tetr_v(s[i]))
			return (0);
		i++;
	}
	return (1);
}

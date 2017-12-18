/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_tetr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabelque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 12:42:42 by aabelque          #+#    #+#             */
/*   Updated: 2017/12/16 13:06:05 by aabelque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_split_tetr(char *s)
{
	int		i;
	int		j;
	int		count;
	char	**new;
	int		k;

	i = 0;
	k = 0;
	count = (ft_strlen(s) + 1) / 21;
	new = (char**)malloc(sizeof(char*) * (count + 1));
	while (s[i] != '\0')
	{
		j = 0;
		new[k] = (char *)malloc(sizeof(char) * 22);
		while (j < 21 && s[i] != '\0')
			new[k][j++] = s[i++];
		new[k][j] = '\0';
		k++;
	}
	if (k > 26)
		return (0);
	new[k] = NULL;
	return (new);
}

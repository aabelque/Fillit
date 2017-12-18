/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 08:35:57 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/02 13:54:16 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		index;
	int		i;
	int		j;

	index = 0;
	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if ((t = (char**)malloc(sizeof(*t) * (ft_count_word(s, c)) + 1)) == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		while (s[index] == c)
			index++;
		t[i] = (char*)malloc(sizeof(t) * (ft_count_ch(&s[index], c) + 1));
		while (s[index] != c && s[index] != '\0')
			t[i][j++] = s[index++];
		t[i++][j] = '\0';
		j = 0;
	}
	t[ft_count_word(s, c)] = NULL;
	return (t);
}

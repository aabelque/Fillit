/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:58:08 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/04 09:38:26 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	size;
	size_t	j;

	i = 0;
	j = 0;
	size = ft_strlen(str2);
	if (size == 0)
		return ((char*)str1);
	while (str1[i])
	{
		while (str1[i + j] == str2[j] && n > i + j)
		{
			if (j == size - 1)
				return ((char*)str1 + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

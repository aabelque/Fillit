/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:09:06 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/04 09:33:21 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int		i;
	size_t	n;

	if (ft_strlen(str2) == 0)
		return ((char*)str1);
	i = 0;
	n = ft_strlen(str1) - ft_strlen(str2) + 1;
	while (*str1 && n)
	{
		if (ft_strncmp(str1, str2, ft_strlen(str2)) == 0)
			return ((char*)str1);
		str1++;
		n--;
	}
	return (NULL);
}

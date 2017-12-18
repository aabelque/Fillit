/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:22:40 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/04 09:51:47 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len_s;
	int		i;

	len_s = 0;
	i = 0;
	while (s[len_s] != '\0')
		len_s++;
	str = (char*)malloc(sizeof(const char) * (len_s + 1));
	if (str == NULL)
		return (NULL);
	while (i <= len_s)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

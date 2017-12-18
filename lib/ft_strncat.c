/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:18:23 by dcirlig           #+#    #+#             */
/*   Updated: 2017/11/24 16:14:07 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char const *src, size_t n)
{
	size_t	i;
	size_t	size_dest;

	i = 0;
	size_dest = ft_strlen(dest);
	while ((i < n) && (src[i] != '\0'))
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}

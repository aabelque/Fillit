/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 10:52:21 by dcirlig           #+#    #+#             */
/*   Updated: 2017/11/28 11:29:04 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*dest1;
	const char	*src1;
	size_t		n;
	size_t		dest_len;

	dest1 = dest;
	src1 = src;
	n = size;
	while (n-- != 0 && *dest1 != '\0')
		dest1++;
	dest_len = dest1 - dest;
	n = size - dest_len;
	if (n == 0)
		return (dest_len + ft_strlen(src1));
	while (*src1 != '\0')
	{
		if (n != 1)
		{
			*dest1++ = *src1;
			n--;
		}
		src1++;
	}
	*dest1 = '\0';
	return (dest_len + (src1 - src));
}

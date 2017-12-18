/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 08:56:54 by dcirlig           #+#    #+#             */
/*   Updated: 2017/11/22 11:16:22 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *dest1;
	unsigned char *src1;

	dest1 = (unsigned char*)dest;
	src1 = (unsigned char*)src;
	while (n--)
	{
		*dest1 = *src1;
		dest1++;
		src1++;
	}
	return (dest);
}

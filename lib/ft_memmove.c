/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:36:28 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/04 09:10:20 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*src1;
	char			*dest1;

	dest1 = (char*)dest;
	src1 = (char*)src;
	if (src1 == dest1)
		return (dest);
	if (src1 < dest1)
	{
		src1 = &src1[n - 1];
		dest1 = &dest1[n - 1];
		while (n--)
			*dest1-- = *src1--;
	}
	else
	{
		while (n--)
			*dest1++ = *src1++;
	}
	return (dest);
}

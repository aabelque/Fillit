/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:33:26 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/04 09:23:58 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*(unsigned char*)s1 - *(unsigned char*)s2);
		else if (*s1 == '\0')
			return (0);
		n--;
		s1++;
		s2++;
	}
	return (0);
}

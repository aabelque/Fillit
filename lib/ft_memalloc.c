/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 08:14:56 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/04 09:05:43 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*s;

	s = (void*)malloc(sizeof(void) * size);
	if (s == NULL)
		return (NULL);
	ft_memset(s, 0, size);
	return (s);
}

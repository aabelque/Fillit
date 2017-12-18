/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digit_number.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 13:40:53 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/04 08:58:42 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digit_number(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size = 1;
	if (n < 0)
	{
		size = 1;
		n = n * (-1);
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:28:04 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/04 09:04:00 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	char	*s;
	int		number;

	number = n;
	i = ft_count_digit_number(number);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = (char*)malloc(sizeof(*s) * (ft_count_digit_number(n) + 1));
	if (s == NULL)
		return (NULL);
	if (n < 0 && n != -2147483648)
	{
		s[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		s[--i] = (n % 10) + '0';
		n = n / 10;
	}
	s[ft_count_digit_number(number)] = '\0';
	return (s);
}

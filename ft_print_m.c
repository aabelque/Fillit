/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_m.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabelque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 13:56:36 by aabelque          #+#    #+#             */
/*   Updated: 2017/12/19 08:25:28 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "lib/libft.h"

void	ft_print_m(char **map)
{
	int	i;
	int j;

	i = -1;
	while (map[++i] != 0)
	{
		j = -1;
		while (map[i][++j] != '\0')
			ft_putchar(map[i][j]);
		ft_putchar('\n');
	}
}

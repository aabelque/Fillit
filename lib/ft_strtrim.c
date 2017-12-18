/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 08:40:00 by dcirlig           #+#    #+#             */
/*   Updated: 2017/11/29 12:59:17 by dcirlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	i;
	char	*str;
	int		j;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) == 0)
		return (ft_strdup(""));
	len = ft_strlen(s);
	i = 0;
	j = 0;
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	if (len == 0)
		return (ft_strdup(""));
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	str = (char*)malloc(sizeof(*str) * (len - i + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

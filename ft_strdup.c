/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 04:39:48 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/08 10:59:59 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*s;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	s = (char*)malloc(sizeof(*str) * (len + 1));
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 21:52:33 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/29 19:26:55 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;
	int		z;

	z = 0;
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tmp = (char*)malloc(sizeof(s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!tmp)
	{
		return (NULL);
	}
	while (s1[i])
	{
		tmp[z++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		tmp[z++] = s2[i++];
	}
	tmp[z] = 0;
	return (tmp);
}

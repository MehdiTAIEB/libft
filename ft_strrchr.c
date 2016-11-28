/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:26:41 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/28 20:26:33 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (tmp[i] == (unsigned char)c)
			return (tmp + i);
		i--;
	}
	if (tmp[i] == (unsigned char)c)
		return (tmp + i);
	return (NULL);
}

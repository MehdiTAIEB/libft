/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:25:45 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/28 20:25:33 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*tmp1;
	const char	*tmp2;
	size_t		i;
	size_t		tmp1l;

	tmp1 = dst;
	tmp2 = src;
	i = size;
	while (i-- != 0 && *tmp1 != '\0')
		tmp1++;
	tmp1l = tmp1 - dst;
	i = size - tmp1l;
	if (i == 0)
		return (tmp1l + ft_strlen(tmp2));
	while (*tmp2 != '\0')
	{
		if (i != 1)
		{
			*tmp1++ = *tmp2;
			i--;
		}
		tmp2++;
	}
	*tmp1 = '\0';
	return (tmp1l + (tmp2 - src));
}

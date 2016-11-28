/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:23:52 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/28 20:32:15 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s1;
	const char	*s2;

	s1 = dst;
	s2 = src;
	if (len || s1 != s2)
	{
		if (dst > src)
		{
			s1 = s1 + len;
			s2 = s2 + len;
			while (len)
			{
				*--s1 = *--s2;
				len--;
			}
		}
		else
			ft_memcpy(dst, src, len);
	}
	return (s1);
}

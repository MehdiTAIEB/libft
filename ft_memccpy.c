/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:23:41 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/28 20:49:34 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,\
	size_t n)
{
	const char	*tmp2;
	char		*tmp;

	tmp = (char *)dst;
	tmp2 = (const char *)src;
	while (n--)
	{
		*tmp = *tmp2;
		tmp++;
		if ((unsigned char)*tmp2 == (unsigned char)c)
			return ((void*)tmp);
		tmp2++;
	}
	return (NULL);
}

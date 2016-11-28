/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:12:28 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/28 20:24:47 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*tmp;
	const char	*tmp2;

	tmp = s1;
	tmp2 = s2;
	i = 0;
	while (i < n)
	{
		if (*tmp != *tmp2)
			return ((unsigned char)*tmp - (unsigned char)*tmp2);
		i++;
		tmp++;
		tmp2++;
	}
	return (0);
}

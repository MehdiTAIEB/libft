/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:23:30 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/28 20:30:40 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*tmp1;
	const char	*tmp2;

	tmp1 = s1;
	tmp2 = s2;
	i = 0;
	while (i < n)
	{
		*tmp1++ = *tmp2++;
		i++;
	}
	return (s1);
}

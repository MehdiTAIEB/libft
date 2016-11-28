/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:22:50 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/28 20:33:23 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*new_s;

	new_s = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		new_s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:26:08 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/28 20:26:01 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*tmp != '\0')
	{
		if (*tmp == (unsigned char)c)
			return (tmp);
		tmp++;
	}
	if (*tmp == (unsigned char)c)
		return (tmp);
	return (NULL);
}

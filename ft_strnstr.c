/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:27:01 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/28 20:27:14 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	int			j;

	i = 0;
	if (*s2 == 0)
		return ((char*)s1);
	while (i < n && s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && s1[i + j])
		{
			j++;
		}
		if (s2[j] == '\0' && (i + j) <= n)
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}

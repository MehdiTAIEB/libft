/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 21:52:50 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/29 19:26:12 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	tmp = (char*)malloc(sizeof(char) * len + 1);
	if (tmp != NULL)
	{
		while (len--)
		{
			tmp[i] = s[start];
			start++;
			i++;
		}
		tmp[i] = 0;
		return (tmp);
	}
	return (NULL);
}

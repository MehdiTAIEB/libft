/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 21:53:22 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/29 19:23:59 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	tmp = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (tmp)
	{
		while (s[i])
		{
			tmp[i] = f(s[i]);
			i++;
		}
		tmp[i] = 0;
		return (tmp);
	}
	return (NULL);
}

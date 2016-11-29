/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 21:52:00 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/29 19:28:37 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int			ft_lint(int n)
{
	int				c;
	unsigned int	f;

	c = 0;
	if (n == 0)
		c++;
	if (n < 0)
	{
		f = n * (-1);
		c++;
	}
	else
		f = n;
	while (f > 0)
	{
		f = f / 10;
		c++;
	}
	return (c);
}

char				*ft_itoa(int n)
{
	char			*c;
	int				i;
	unsigned int	f;

	i = ft_lint(n);
	if (!(c = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	c[i] = '\0';
	n != 0 ? n != 0 : (c[0] = '0');
	if (n != 0)
	{
		if (n < 0)
		{
			c[0] = '-';
			f = n * (-1);
		}
		else
			f = n;
		while (f > 0)
		{
			c[--i] = (f % 10) + '0';
			f = f / 10;
		}
	}
	return (c);
}

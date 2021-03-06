/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 11:46:02 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/16 16:55:05 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *c)
{
	int i;
	int nb;

	i = 1;
	nb = 0;
	while ((*c >= 9 && *c <= 13) || *c == 32)
	{
		c++;
	}
	if (*c == 43)
	{
		c++;
	}
	else if (*c == 45)
	{
		i *= -1;
		c++;
	}
	while ((*c <= '9' && *c >= '0') && *c)
	{
		nb *= 10;
		nb += *c - '0';
		c++;
	}
	return (i * nb);
}

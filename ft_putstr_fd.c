/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:29:18 by njaros            #+#    #+#             */
/*   Updated: 2021/11/02 15:29:21 by njaros           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			c = c + ft_putchar_fd(s[i], fd);
			i++;
		}
	}
	else
		c = ft_putstr_fd("(null)", 1);
	return (c);
}

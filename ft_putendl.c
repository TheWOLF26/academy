/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:21:00 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/03 17:23:14 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar2(char c)
{
	write (1, &c, 1);
}

void	ft_putendl(char const *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar2(s[i]);
		i++;
	}
	ft_putchar2('\n');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:30:53 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/04 14:09:03 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long	aux;

	aux = n;
	if (aux < 0)
	{
		aux *= -1;
		ft_putchar2('-');
	}
	if (aux > 9)
		ft_putnbr(aux / 10);
	ft_putchar2(aux % 10 + '0');
}

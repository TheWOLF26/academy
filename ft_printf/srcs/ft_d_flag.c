/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:24:01 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/28 11:36:51 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		compute_d_flag(va_list *ap, t_arg args)
{
	int		nbr;
	char	*text;

	nbr = va_arg(*ap, int);
	(void)args;
	text = ft_itoa(nbr);
	ft_putstr(text);
	return (ft_strlen(text));
}

int		compute_u_flag(va_list *ap, t_arg args)
{
	unsigned int	nbr;
	char			*text;

	nbr = va_arg(*ap, int);
	(void)args;
	text = ft_itoa_unsigned(nbr);
	ft_putstr(text);
	return (ft_strlen(text));
}

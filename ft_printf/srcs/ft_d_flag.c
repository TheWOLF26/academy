/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:24:01 by anflorea          #+#    #+#             */
/*   Updated: 2015/12/03 13:19:44 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		compute_d_flag(va_list *ap, t_arg args)
{
	char	*text;

	if (args.mod_l)
		text = get_longint(ap);
	else if (args.mod_z)
		text = get_size_t(ap);
	else if (args.mod_j)
		text = get_intmax_t(ap);
	else
		text = get_integer(ap);
	ft_putstr(text);
	return (ft_strlen(text));
}

int		compute_u_flag(va_list *ap, t_arg args)
{
	char			*text;

	if (args.mod_l)
		text = get_unsigned_long(ap);
	else
		text = get_unsigned(ap);
	ft_putstr(text);
	return (ft_strlen(text));
}
/*
int		compute_U_flag(va_list *ap, t_arg args)
{
	unsigned long int	nbr;
	char				*text;

	nbr = va_arg(*ap, unsigned long);
	(void)args;
	text = ft_itoa_unsigned(nbr);
	ft_putstr(text);
	return (ft_strlen(text));
}*/

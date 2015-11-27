/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_compute.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:02:40 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/27 19:42:16 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		try_char_flags(va_list *ap, char *flag, t_arg args)
{
	if (*flag == 's')
		return (compute_s_flag(ap, args));
	if (*flag == 'c')
		return (compute_c_flag(ap, args));
	return (0);
}

int		try_nbr_flags(va_list *ap, char *flag, t_arg args)
{
	if (*flag == 'd' || *flag == 'i' || *flag == 'u')
		return (compute_d_flag(ap, args));
	if (*flag == 'p')
		return (compute_p_flag(ap, args));
	return (0);
}

int		ft_compute_flag(va_list *ap, char *flag, t_arg args)
{
	int		value;

	value = 0;
	value += (try_char_flags(ap, flag, args));
	value += (try_nbr_flags(ap, flag, args));
	return (value);
}

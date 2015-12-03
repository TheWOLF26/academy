/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_compute.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:02:40 by anflorea          #+#    #+#             */
/*   Updated: 2015/12/03 13:27:24 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		try_char_flags(va_list *ap, char *flag, t_arg args)
{
	if (*flag == 's')
		return (compute_s_flag(ap, args));
	if (*flag == 'c')
		return (compute_c_flag(ap, args));
	if (*flag == 'C')
		return (compute_C_flag(ap, args));
	if (*flag == 'D')
	{
		args.mod_l = 1;
		return (compute_d_flag(ap, args));
	}
	if (*flag == 'U')
	{
		args.mod_l = 1;
		return (compute_u_flag(ap, args));
	}
	return (0);
}

int		try_nbr_flags(va_list *ap, char *flag, t_arg args)
{
	if (*flag == 'd' || *flag == 'i')
		return (compute_d_flag(ap, args));
	if (*flag == 'u')
		return (compute_u_flag(ap, args));
	if (*flag == 'p')
		return (compute_p_flag(ap, args));
	if (*flag == 'X')
		return (compute_X_flag(ap, args));
	if (*flag == 'x' && args.mod_l)
		return (compute_x_long_flag(ap, args));
	if (*flag == 'x')
		return (compute_x_flag(ap, args));
	if (*flag == 'O' || (*flag == 'o' && args.mod_l))
		return (compute_O_flag(ap, args));
	if (*flag == 'o')
		return (compute_o_flag(ap, args));
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

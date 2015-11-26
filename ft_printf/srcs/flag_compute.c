/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_compute.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:02:40 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/26 17:39:15 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		try_char_flags(va_list *ap, char *flag, t_arg args)
{
	if (*flag == 's')
		return (compute_s_flag(ap, args));
	return (0);
}

int		ft_compute_flag(va_list *ap, char *flag, t_arg args)
{
	return (try_char_flags(ap, flag, args));
	//return (0);
}

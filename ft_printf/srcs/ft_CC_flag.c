/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_CC_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:26:17 by anflorea          #+#    #+#             */
/*   Updated: 2015/12/03 12:20:54 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		compute_C_flag(va_list *ap, t_arg args)
{
	wchar_t	text;

	text = va_arg(*ap, int);
	(void)args;
	ft_putwchar(text);
	if (text < 0x7F)
		return (1);
	if (text < 0x7FF)
		return (2);
	if (text < 0xFFFF)
		return (3);
	return (4);
}

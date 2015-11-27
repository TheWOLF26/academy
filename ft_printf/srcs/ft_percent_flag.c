/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent_flag.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:50:56 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/27 17:54:05 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		compute_percent_flag(va_list *ap, t_arg args)
{
	ft_putchar('%');
	(void)args;
	(void)ap;
	return (1);
}

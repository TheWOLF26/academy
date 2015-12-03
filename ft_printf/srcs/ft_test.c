/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:06:41 by anflorea          #+#    #+#             */
/*   Updated: 2015/12/03 13:29:11 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// TODO Remove this file before deployment

void	ft_print_test_targ(t_arg arg)
{
	printf("has_hash : %hhd\n", arg.has_hash);
	printf("has_zero : %hhd\n", arg.has_zero);
	printf("has_plus : %hhd\n", arg.has_plus);
	printf("has_minus: %hhd\n", arg.has_minus);
	printf("has_space: %hhd\n", arg.has_space);
	printf("has_dot  : %hhd\n", arg.has_dot);
	printf("mod_none : %hhd\n", arg.mod_none);
	printf("mod_h    : %hhd\n", arg.mod_h);
	printf("mod_hh   : %hhd\n", arg.mod_hh);
	printf("mod_l    : %hhd\n", arg.mod_l);
	printf("mod_ll   : %hhd\n", arg.mod_ll);
	printf("mod_j    : %hhd\n", arg.mod_j);
	printf("mod_z    : %hhd\n", arg.mod_z);
	printf("width    : %u\n", arg.width);
	printf("dot_width: %u\n", arg.dot_width);
}

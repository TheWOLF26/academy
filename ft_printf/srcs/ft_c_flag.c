/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:55:29 by anflorea          #+#    #+#             */
/*   Updated: 2015/12/03 11:38:22 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"

int		compute_c_flag(va_list *ap, t_arg args)
{
	char	*spaces;
	char	ch;
	char	text;

	text = va_arg(*ap, int);
	ch = ' ';
	if (args.has_zero)
		ch = '0';
	if (args.width > 1)
	{
		spaces = ft_memalloc(args.width - 1);
		spaces = ft_memset(spaces, ch, args.width - 1);
		if (args.has_minus == 0)
		{
			ft_putchar(text);
			ft_putstr(spaces);
		}
		else
		{
			ft_putstr(spaces);
			ft_putchar(text);
		}
		return (args.width);
	}
	ft_putchar(text);
	return (1);
}

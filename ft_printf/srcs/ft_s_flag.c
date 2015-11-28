/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:54:09 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/28 13:08:32 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		compute_s_flag(va_list *ap, t_arg args)
{
	char	*text;
	char	*spaces;
	char	ch;

	text = va_arg(*ap, char *);
	ch = ' ';
	if (args.has_zero)
		ch = '0';
	if (text && args.width > ft_strlen(text))
	{
		spaces = ft_memalloc(args.width - ft_strlen(text) + 1);
		spaces = ft_memset(spaces, ch, args.width - ft_strlen(text));
		spaces[args.width - ft_strlen(text) + 1] = '\n';
		if (args.has_minus == 0)
		{
			ft_putstr(spaces);
			ft_putstr(text);
		}
		else
		{
			ft_putstr(text);
			ft_putstr(spaces);
		}
	}
	else if (text)
		ft_putstr(text);
	else
	{
		ft_putstr("(null)");
		return (6);
	}
	return (ft_strlen(text));
}

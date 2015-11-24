/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:13:46 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/24 19:58:19 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_findEndFlag(const char *str)
{
	int		i;

	i = 1;
	while (!(ft_strchr(KNOWN_FLAGS, str[i])) && str[i] != '\0')
		i++;
	return (i);
}

int		ft_inner_printf(va_list *ap, const char *format)
{
	int		end;
	char	*flag;
	int		value;

	value = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			end = ft_findEndFlag(format);
			ft_putchar('\n');
			flag = ft_strsub(format, 0, end + 1);
			ft_putendl(flag);
			format += end;
		}
		else
		{
			ft_putchar(*format);
			value++;
		}
		format++;
	}
	return (value);
}

int		ft_printf(const char *format, ...)
{
	va_list	ap;
	int		value;

	va_start(ap, format);
	value = ft_inner_printf(&ap, format);
	va_end(ap);
	return (value);
}

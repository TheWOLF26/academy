/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:13:46 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/26 11:02:31 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_next_printf(va_list *ap, char *flag, int *value)
{
	int		len;

	len = ft_strlen(flag);
	if (ft_strcmp(flag, "%%") == 0)
	{
		ft_putchar('%');
		(*value)++;
	}
	else if (ft_strchr(KNOWN_FLAGS, flag[len - 1]))
	{
		*value += ft_correct_flag(ap, flag);
	}
}

int		ft_findEndFlag(const char *str)
{
	int		i;

	i = 1;
	while (ft_strchr(INNER_FLAGS, str[i]) && str[i] != '\0')
		i++;
	if (ft_strchr(KNOWN_FLAGS, str[i]))
		return (i);
	else if (str[i] == '%' && str[i - 1] == '%')
		return (i);
	else
		return (i - 1);
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
			flag = ft_strsub(format, 0, end + 1);
			ft_next_printf(ap, flag, &value);
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

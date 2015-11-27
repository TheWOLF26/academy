/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:33:03 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/27 17:50:43 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		compute_p_flag(va_list *ap, t_arg args)
{
	void				*ptr;
	char				*text;
	unsigned long int	n;
	int					i;

	ptr = va_arg(*ap, void*);
	(void)args;
	text = (char*)malloc(sizeof(char) * 30);
	n = (unsigned long int)ptr;
	i = 0;
	if (n == 0)
		text[i++] = '0';
	while (n > 0)
	{
		text[i] = "0123456789abcdef"[n % 16];
		n /= 16;
		i++;
	}
	text[i] = '\0';
	text = ft_strrev(text);
	ft_putstr("0x");
	ft_putstr(text);
	return (2 + ft_strlen(text));
}

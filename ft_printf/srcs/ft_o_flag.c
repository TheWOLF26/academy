/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_o_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 12:05:39 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/28 12:12:25 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*itoa_base8(unsigned int nbr)
{
	char	*new;
	int		i;

	i = 0;
	new = (char*)malloc(sizeof(char) * 30);
	if (nbr == 0)
		new[i++] = '0';
	while (nbr > 0)
	{
		new[i++] = "01234567"[nbr % 8];
		nbr /= 8;
	}
	new[i] = '\0';
	new = ft_strrev(new);
	return (new);
}

int		compute_o_flag(va_list *ap, t_arg args)
{
	unsigned int	nbr;
	char			*text;

	nbr = va_arg(*ap, unsigned int);
	text = itoa_base8(nbr);
	if (args.has_hash == 1)
	{
		ft_putstr("0");
		ft_putstr(text);
		return (1 + ft_strlen(text));
	}
	ft_putstr(text);
	return (ft_strlen(text));
}

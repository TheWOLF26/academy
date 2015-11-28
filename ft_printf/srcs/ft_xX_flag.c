/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xX_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 11:38:53 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/28 12:50:44 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*itoa_base16(unsigned int nbr, const char *trans_table)
{
	char	*new;
	int		i;

	i = 0;
	new = (char*)malloc(sizeof(char) * 30);
	if (nbr == 0)
		new[i++] = '0';
	while (nbr > 0)
	{
		new[i++] = trans_table[nbr % 16];
		nbr /= 16;
	}
	new[i] = '\0';
	new = ft_strrev(new);
	return (new);
}

int		compute_x_flag(va_list *ap, t_arg args)
{
	char			*spaces;
	unsigned int	nbr;
	char			*text;

	nbr = va_arg(*ap, unsigned int);
	(void)spaces;
	text = itoa_base16(nbr, "0123456789abcdef");
	if (args.has_hash == 1)
	{
		ft_putstr("0x");
		ft_putstr(text);
		return (2 + ft_strlen(text));
	}
	ft_putstr(text);
	return (ft_strlen(text));
}

int		compute_X_flag(va_list *ap, t_arg args)
{
	char			*spaces;
	unsigned int	nbr;
	char			*text;

	nbr = va_arg(*ap, unsigned int);
	(void)spaces;
	text = itoa_base16(nbr, "0123456789ABCDEF");
	if (args.has_hash == 1)
	{
		ft_putstr("0X");
		ft_putstr(text);
		free(text);
		return (2 + ft_strlen(text));
	}
	ft_putstr(text);
	free(text);
	return (ft_strlen(text));
}

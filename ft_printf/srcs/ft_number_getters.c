/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_getters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 12:41:17 by anflorea          #+#    #+#             */
/*   Updated: 2015/12/03 13:20:17 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_integer(va_list *ap)
{
	char	*aux;
	int		nbr;

	nbr = va_arg(*ap, int);
	aux = ft_itoa(nbr);
	return (aux);
}

char	*get_longint(va_list *ap)
{
	char	*aux;
	long	nbr;

	nbr = va_arg(*ap, long);
	aux = ft_itoa_long(nbr);
	return (aux);
}

char	*get_size_t(va_list *ap)
{
	size_t	nbr;
	char	*aux;

	nbr = va_arg(*ap, size_t);
	aux = ft_itoa_long(nbr);
	return (aux);
}

char	*get_intmax_t(va_list *ap)
{
	intmax_t	nbr;
	char		*aux;

	nbr = va_arg(*ap, intmax_t);
	aux = ft_itoa_long(nbr);
	return (aux);
}

char	*get_unsigned(va_list *ap)
{
	unsigned int	nbr;
	char			*aux;

	nbr = va_arg(*ap, unsigned int);
	aux = ft_itoa_unsigned(nbr);
	return (aux);
}

char	*get_unsigned_long(va_list *ap)
{
	unsigned long	nbr;
	char			*aux;

	nbr = va_arg(*ap, unsigned long);
	aux = ft_itoa_unsigned(nbr);
	return (aux);
}

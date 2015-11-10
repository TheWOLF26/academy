/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 16:11:12 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/10 16:34:02 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nrcif(long nbr)
{
	int		i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

static char	*ft_tochar(long nbr, int len, int sgn)
{
	int		i;
	char	*new;

	i = 0;
	new = (char*)malloc(sizeof(char) * (len + sgn + 1));
	if (new)
	{
		if (nbr == 0)
		{
			new[0] = '0';
			new[1] = '\0';
		}
		else
		{
			i = 0;
			while (nbr > 0)
			{
				new[i++] = nbr % 10 + '0';
				nbr /= 10;
			}
			if (sgn == 1)
				new[i++] = '-';
			new[i] = '\0';

		}
	}
	return (new);
}

static void	ft_strrevv(char *str)
{
	int		i;
	int		j;
	char	aux;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		aux = str[i];
		str[i] = str[j];
		str[j] = aux;
		i++;
		j--;
	}
}

char		*ft_itoa(int n)
{
	long	aux;
	char	*new;
	int		sgn;
	int		i;

	aux = n;
	sgn = 0;
	if (aux < 0)
	{
		sgn = 1;
		aux *= -1;
	}
	new = ft_tochar(aux, ft_nrcif(aux), sgn);
	if (new)
		ft_strrevv(new);
	return (new);
}

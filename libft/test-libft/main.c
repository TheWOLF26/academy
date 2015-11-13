/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 18:08:56 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/13 16:58:49 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_intcmp(int a, int b)
{
	return (b - a);
}

void	ft_print_tab(int *v, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(v[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		v[100];
	int		i;
	char	*str;

	i = 0;
	while (i < argc - 1)
	{
		v[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	ft_print_tab(v, argc - 1);
	ft_putendl("Bubble sort:");
	ft_bubble_sort(v, argc - 1, ft_intcmp);	
	ft_print_tab(v, argc - 1);
	ft_putendl("Quick sort:");
	ft_qsort(v, argc - 1, ft_intcmp);	
	ft_print_tab(v, argc - 1);
	str = ft_strdup(" asdd EReqdDa da EEQS  dasd ddqwedD  DDD aw!");
	ft_putendl(ft_strcapitalize(str));
	str = ft_strdup("Error!");
	ft_putendl(ft_strrev(str));
	ft_putnbr(ft_gcd(ft_atoi(argv[1]), ft_atoi(argv[2])));
	return (0);
}
